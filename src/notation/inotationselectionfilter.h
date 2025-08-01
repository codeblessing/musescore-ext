/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2025 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "notationtypes.h"

namespace mu::notation {
class INotationSelectionFilter
{
public:
    virtual ~INotationSelectionFilter() = default;

    virtual bool isSelectionTypeFiltered(const SelectionFilterTypesVariant& variant) const = 0;
    virtual void setSelectionTypeFiltered(const SelectionFilterTypesVariant& variant, bool filtered) = 0;

    virtual bool includeSingleNotes() const = 0;
    virtual void setIncludeSingleNotes(bool include) = 0;
};

using INotationSelectionFilterPtr = std::shared_ptr<INotationSelectionFilter>;
}
