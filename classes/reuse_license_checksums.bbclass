# Class for providing default checksum values based on licenses
# installed according to REUSE specification
#
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

do_populate_lic_prepend() {
    srcdir = d.getVar('S')

    # keys are only Yocto's SPDX(-like) identifiers from licenses.conf
    yocto_to_spdx_id_map = {
        'LGPL-2.0' : [
            'LGPL-2.0-only',
            'LGPL-2.0-or-later'
        ],
        'LGPL-2.0+' : [
            'LGPL-2.0-or-later'
        ],
        'LGPL-2.1' : [
            'LGPL-2.1-only',
            'LGPL-2.1-or-later'
        ],
        'LGPL-2.1+' : [
            'LGPL-2.1-or-later'
        ],
        'LGPL-3.0' : [
            'LGPL-3.0-only',
            'LGPL-3.0-or-later'
        ],
        'GPL-2.0' : [
            'GPL-2.0-only',
            'GPL-2.0-or-later'
        ],
        'GPL-3.0' : [
            'GPL-3.0-only',
            'GPL-3.0-or-later'
        ],
        'BSD-2-Clause' : [
            'BSD-2-Clause'
        ],
        'BSD-3-Clause' : [
            'BSD-3-Clause'
        ],
        'MIT' : [
            'MIT'
        ],
        'LicenseRef-KDE-Accepted-LGPL': [
            'LicenseRef-KDE-Accepted-LGPL'
        ]
    }
    spdx_id_to_yocto_map = {}
    for yocto_id in yocto_to_spdx_id_map:
        for spdx_id in yocto_to_spdx_id_map[yocto_id]:
            if spdx_id in spdx_id_to_yocto_map:
                spdx_id_to_yocto_map[spdx_id].append(yocto_id)
            else:
                spdx_id_to_yocto_map[spdx_id] = [ yocto_id ]

    # unfortunatly license text may differ in whitespaces and empty lines
    checksum_map = {
        'LGPL-2.0-only': [ '6d2d9952d88b50a51a5c73dc431d06c7' ],
        'LGPL-2.0-or-later': [ '6d2d9952d88b50a51a5c73dc431d06c7' ],
        'LGPL-2.1-only': [ 'fabba2a3bfeb22a6483d44e9ae824d3f' ],
        'LGPL-2.1-or-later': [ '2a4f4fd2128ea2f65047ee63fbca9f68' ],
        'LGPL-3.0-only': [ 'c51d3eef3be114124d11349ca0d7e117' ],
        'LGPL-3.0-or-later': [ 'c51d3eef3be114124d11349ca0d7e117' ],
        'GPL-2.0-only': [ '93e64b4a83c7e441e48bbdeeea05c977' ],
        'GPL-2.0-or-later': [ 'fed54355545ffd980b814dab4a3b312c' ],
        'GPL-3.0-only': [ '1c76c4cc354acaac30ed4d5eefea7245' ],
        'GPL-3.0-or-later´': [ '1c76c4cc354acaac30ed4d5eefea7245' ],
        'BSD-2-Clause': [ '63d6ee386b8aaba70b1bf15a79ca50f2' ],
        'BSD-3-Clause': [ '954f4d71a37096249f837652a7f586c0' ],
        'MIT': [ '38aa75cf4c4c87f018227d5ec9638d75' ],
        'LicenseRef-KDE-Accepted-LGPL': [
            "6a2eced623a7c9d0c8996ce24917d006",
            "e4b79a181b6483b37d39a27f4d75e60a",
        ],
        'MIT-CMU': [ 'b6936b5be2ab721140d9bf57c37b0b92' ],
        'Unicode-DFS-2016': [ '3daac258519ec32945c80ae0f7ba88f4' ]
    }

    # generate flat list of used license identifiers
    package_license_statement = d.getVar('LICENSE') or ''
    package_license_statement = package_license_statement.replace("&", " ")
    package_license_statement = package_license_statement.replace("(", " ")
    package_license_statement = package_license_statement.replace("|", " ")
    package_license_statement = package_license_statement.replace(")", " ")
    recipe_licenses = package_license_statement.split()
    recipe_licenses = list(map(str.strip, recipe_licenses))

    package_license_qa_whitelist = d.getVar('REUSE_LICENSECHECK_WHITELIST') or ''
    recipe_licenses_qa_whitelist = package_license_qa_whitelist.split()
    recipe_licenses_qa_whitelist = list(map(str.strip, recipe_licenses_qa_whitelist))

    if d.getVar('LIC_FILES_CHKSUM') and not d.getVar('LIC_FILES_CHKSUM') == '':
        print("Aborting LIC_FILES_CHKSUM computation, value already set to:", d.getVar('LIC_FILES_CHKSUM'))
    else:
        checksum_entries = [" "]
        for license_id in recipe_licenses:
            if license_id in yocto_to_spdx_id_map:
                for license_file in yocto_to_spdx_id_map[license_id]:
                    license_file_path = os.path.join(srcdir, 'LICENSES/' + license_file + '.txt')
                    if os.path.exists(license_file_path):
                        md5chksum = bb.utils.md5_file(license_file_path)
                        if md5chksum in checksum_map[license_file]:
                            entry = "file://LICENSES/" + license_file + ".txt;md5=" + md5chksum
                            checksum_entries.append(entry)
                        else:
                            bb.warn("QA Issue: %s [%s]" % (license_name + " not found in checksum table", "reuse_license"))
                        break
            else:
                bb.warn("License checksum database has no entry: ", license_id)

        separator = " "
        d.setVar('LIC_FILES_CHKSUM', separator.join(checksum_entries))
        print('Set LIC_FILES_CHKSUM from known SPDX files to:', d.getVar('LIC_FILES_CHKSUM'))

    # QA test for complete statement
    if d.getVar('KF5_REUSE_LICENSECHECK_ENABLED') and d.getVar('KF5_REUSE_LICENSECHECK_ENABLED') == '1':
        src_licenses = os.listdir(os.path.join(srcdir, 'LICENSES/'))
        for license_file in src_licenses:
            # convert license_file to SPDX identifier
            license_name = license_file
            if license_name.endswith('.txt'):
                license_name = license_name[:-4]

            # compute list intersection and test if empty
            if license_name in spdx_id_to_yocto_map:
                if list(set(recipe_licenses) & set(spdx_id_to_yocto_map[license_name])):
                    continue
            if license_name in recipe_licenses_qa_whitelist:
                continue
            bb.warn("QA Issue: %s [%s]" % (license_name + " found in SRC but not in package license statement", "reuse_license"))
}
