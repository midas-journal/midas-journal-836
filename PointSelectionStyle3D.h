/*=========================================================================
 *
 *  Copyright David Doria 2011 daviddoria@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef PointSelectionStyle3D_H
#define PointSelectionStyle3D_H

// Superclass
#include "PointSelectionStyle.h"
#include <vtkInteractorStyleTrackballCamera.h>

// VTK
#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>

// STL
#include <vector>

// Custom
#include "Coord.h"

// Define interaction style
class PointSelectionStyle3D : public vtkInteractorStyleTrackballCamera, public PointSelectionStyle
{
  public:
    static PointSelectionStyle3D* New();
    PointSelectionStyle3D();
    vtkTypeMacro(PointSelectionStyle3D, vtkInteractorStyleTrackballCamera);
 
    void OnLeftButtonDown() ;
 
    vtkSmartPointer<vtkSphereSource> DotSource;
    
    void AddNumber(double p[3]);

    void RemoveAll();
    void DeleteLastCorrespondence();

    vtkPolyData* Data;

    void SetCurrentRenderer(vtkRenderer*);
    
  private:
    
  
};

#endif
