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

#include "UTurbSolver.h"
#include "Mesh.h"
#include "FaceMesh.h"
#include "CellMesh.h"
#include "SolverInfo.h"
#include "SolverState.h"
#include "FaceTopo.h"
#include "Boundary.h"
#include "BcRecord.h"
#include "DataBase.h"
#include "NsIdx.h"
#include "HXMath.h"
#include "UTurbLusgs.h"
#include <iostream>


BeginNameSpace( ONEFLOW )

REGISTER_SOLVER( UTurbSolver )

UTurbSolver::UTurbSolver()
{
}

UTurbSolver::~UTurbSolver()
{
}

void UTurbSolver::StaticInit()
{
    TurbSolver::StaticInit();
    LusgsState::AddSolver( this->sid, this->gridType, new UTurbLusgs() );
}

void UTurbSolver::Init()
{
}

void UTurbSolver::Run()
{
}

EndNameSpace
