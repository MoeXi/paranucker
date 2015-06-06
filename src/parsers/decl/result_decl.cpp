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

#include "includes/parserincludes.h"

parserDefine(ResultDecl);

#include "parsers/base/decl.h"

#include "nodes/decl/result_decl.h"

#include "nodes/base/type.h"

namespace Generic
{

void parseResultDeclNode(ResultDeclNode *node)
{
    fillType(node);
    fillLocation(node);
    fillDeclLabel(node);
    Log::log(node);

    fillDeclAutoGenerated(node);

    fillDeclAttributes(node);
    node->resultType = static_cast<TypeNode*>(createParseNode(
        node,
        TREE_TYPE(node->gccNode),
        "result type"));
}

}
