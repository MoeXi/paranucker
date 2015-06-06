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

parserDefine(TypeDecl);

#include "parsers/base/decl.h"

#include "nodes/decl/type_decl.h"

namespace Generic
{

void parseTypeDeclNode(TypeDeclNode *node)
{
    fillType(node);
    fillLocation(node);
    fillDeclLabel(node);
    Log::log(node);

    fillDeclAutoGenerated(node);
    fillDeclAttributes(node);

//      going to  parent
//    createParseNode(
//        node,
//        TREE_TYPE(node->gccNode),
//        "result type");
}

}
