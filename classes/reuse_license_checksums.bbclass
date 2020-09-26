# Class for providing default checksum values based on licenses
# installed according to REUSE specification
#
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

do_populate_lic_prepend() {
    license = d.getVar('LICENSE') or ''
    srcdir = d.getVar('S')

    if d.getVar('LIC_FILES_CHKSUM') and not d.getVar('LIC_FILES_CHKSUM') == '':
        print("Aborting LIC_FILES_CHKSUM computation, value already set to:", d.getVar('LIC_FILES_CHKSUM'))
    else:
        # TODO computation logic should also be able to handle multi-license statements
        # right now, in KF5 only single license statements are contained
        if license == 'LGPL-2.0':
            if os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-2.0-only.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-2.0-only.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7")
            elif os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-2.0-or-later.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7")
        elif license == 'LGPL-2.1':
            if os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-2.1-only.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-2.1-only.txt;md5=fabba2a3bfeb22a6483d44e9ae824d3f")
            elif os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-2.1-or-later.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-2.1-or-later.txt;md5=2a4f4fd2128ea2f65047ee63fbca9f68")
        elif license == 'LGPL-3.0':
            if os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-3.0-only.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-3.0-only.txt;md5=c51d3eef3be114124d11349ca0d7e117")
            elif os.path.exists(os.path.join(srcdir, 'LICENSES/LGPL-3.0-or-later.txt')):
                d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/LGPL-3.0-or-later.txt;md5=c51d3eef3be114124d11349ca0d7e117")
        elif license == 'BSD-3-Clause':
            d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/BSD-3-Clause.txt;md5=954f4d71a37096249f837652a7f586c0")
        elif license == 'MIT':
            d.setVar('LIC_FILES_CHKSUM', "file://LICENSES/MIT.txt;md5=38aa75cf4c4c87f018227d5ec9638d75")
        print('Set LIC_FILES_CHKSUM from known SPDX files to:', d.getVar('LIC_FILES_CHKSUM'))
}
