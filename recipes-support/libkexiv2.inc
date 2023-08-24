# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Wrapper around Exiv2 library to manipulate picture metadata as EXIF and XMP"
SUMMARY = "Wrapper around Exiv2 library to manipulate picture metadata as EXIF and XMP"
HOMEPAGE = "https://invent.kde.org/graphics/libkexiv2"
LICENSE = "BSD-3-Clause & GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums

DEPENDS = " \
    exiv2 \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

