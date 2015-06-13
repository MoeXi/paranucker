/*
 *  Copyright (C) 2015  Andrei Karas
 *
 *  This file is part of AstDumper.
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

#ifndef NODES_VEC_TREEVECNODE_H
#define NODES_VEC_TREEVECNODE_H

#include "nodes/base/vec.h"

#include <vector>

struct TreeVecNode : public VecNode
{
    TreeVecNode() :
        VecNode(),
        args()
    {
    }

    std::vector<Node*> args;
};

#endif // NODES_VEC_TREEVECNODE_H