/*---------------------------------------------------------------------------*\
    OneFLOW - LargeScale Multiphysics Scientific Simulation Environment
    Copyright (C) 2017-2022 He Xin and the OneFLOW contributors.
-------------------------------------------------------------------------------
License
    This file is part of OneFLOW.

    OneFLOW is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OneFLOW is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OneFLOW.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/


#pragma once
#include "CurveMesh.h"

BeginNameSpace( ONEFLOW )

class CircleLineMesh : public CurveMesh
{
public:
    CircleLineMesh();
    ~CircleLineMesh() override;
public:
    Real radius;
    Real alpha0, alpha1;
public:
    void CalcCurveGeometry() override;
    void GenerateLineMesh() override;
    void CalcCoor( Real s, Real & xt, Real & yt, Real & zt ) override;
};


EndNameSpace
