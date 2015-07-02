/*
 *  Copyright (C) 2015  Andrei Karas
 *
 *  This file is part of Paranoid null checker.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ANALYSIS_COLLECTIONS_H
#define ANALYSIS_COLLECTIONS_H

#include "includes.h"

#include <set>
#include <string>

struct Node;
struct WalkItem;

namespace Analysis
{
    void addNeedCheckNullVars(WalkItem &wi,
                              WalkItem &wo);

    void addNullVar(WalkItem &wi,
                    const std::string &var);

    void addLinkedVar(WalkItem &wi,
                      std::string parent,
                      const std::string &var);

    void removeNeedCheckNullVar(WalkItem &wi, std::string str);

    void removeNeedCheckNullVarsSetAll(WalkItem &wi,
                                       std::set<std::string> &vars);

    void removeNeedCheckNullVarsSet(WalkItem &wi,
                                    std::set<std::string> &vars);

    void mergeNullChecked(WalkItem &wi1, WalkItem &wi2);

    void mergeNonNullChecked(WalkItem &wi1, WalkItem &wi2);

    void intersectNullChecked(WalkItem &wi, WalkItem &wi1, WalkItem &wi2);

    void intersectNonNullChecked(WalkItem &wi, WalkItem &wi1, WalkItem &wi2);
}

#endif // ANALYSIS_COLLECTIONS_H