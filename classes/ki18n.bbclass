# Class for recipes using ki18n for internationalization
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

inherit python3native
inherit gettext

DEPENDS += " \
    ki18n \
    gettext-native \
"
