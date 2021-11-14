# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2014 Erik Botö <erik.boto@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

# whitelist licenses are all compatible with LGPL-2.0+ and do not add additional restrictions
REUSE_LICENSECHECK_WHITELIST = "LGPL-2.0 LGPL-3.0 LicenseRef-KDE-Accepted-LGPL"
LICENSE = "BSD-2-Clause & LGPL-2.0+"
PR = "r0"

DEPENDS = "zlib bzip2 xz qtbase"

require karchive_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
