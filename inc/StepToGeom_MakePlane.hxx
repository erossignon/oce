// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakePlane_HeaderFile
#define _StepToGeom_MakePlane_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Plane_HeaderFile
#include <Handle_StepGeom_Plane.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
class StepGeom_Plane;
class Geom_Plane;


//! This class implements the mapping between classes <br>
//!          Plane from StepGeom which describes a plane from <br>
//!          Prostep and Plane form Geom. <br>
class StepToGeom_MakePlane  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Plane)& SP,Handle(Geom_Plane)& CP) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
