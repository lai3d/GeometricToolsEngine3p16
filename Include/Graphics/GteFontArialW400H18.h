// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2018
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 3.0.0 (2016/06/19)

#pragma once

#include <Graphics/GteFont.h>

namespace gte
{

class GTE_IMPEXP FontArialW400H18 : public Font
{
public:
    // Construction.  This is an embedded font that is generated by the
    // BitmapFontCreator tool.
    FontArialW400H18(std::shared_ptr<ProgramFactory> const& factory, int maxMessageLength);

private:
    static int msWidth;
    static int msHeight;
    static unsigned char msTexels[];
    static float msCharacterData[];
};

}
