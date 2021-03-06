// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dConvert_HeaderFile
#define _Geom2dConvert_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Handle_TColGeom2d_HArray1OfBSplineCurve_HeaderFile
#include <Handle_TColGeom2d_HArray1OfBSplineCurve.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
class Geom2d_BSplineCurve;
class Geom2d_Curve;
class TColGeom2d_Array1OfBSplineCurve;
class TColStd_Array1OfReal;
class TColGeom2d_HArray1OfBSplineCurve;
class TColStd_HArray1OfInteger;
class Geom2dConvert_BSplineCurveKnotSplitting;
class Geom2dConvert_BSplineCurveToBezierCurve;
class Geom2dConvert_CompCurveToBSplineCurve;
class Geom2dConvert_ApproxCurve;



//!  This package provides an implementation of algorithmes to do <br>
//!  the conversion between equivalent geometric entities from <br>
//!  package Geom2d. <br>
//!  It gives the possibility : <br>
//!   . to obtain the B-spline representation of bounded curves. <br>
//!   . to split a B-spline curve into several B-spline curves <br>
//!     with some constraints of continuity, <br>
//!   . to convert a B-spline curve into several Bezier curves <br>
//!     or surfaces. <br>
//!  All the geometric entities used in this package are bounded. <br>
//!   References : <br>
//!  . Generating the Bezier Points of B-spline curves and surfaces <br>
//!    (Wolfgang Bohm) CAGD volume 13 number 6 november 1981 <br>
//!  . On NURBS: A Survey  (Leslie Piegl) IEEE Computer Graphics and <br>
//!    Application January 1991 <br>
//!  . Curve and surface construction using rational B-splines <br>
//!    (Leslie Piegl and Wayne Tiller) CAD Volume 19 number 9 november <br>
//!    1987 <br>
//!  . A survey of curve and surface methods in CAGD (Wolfgang BOHM) <br>
//!    CAGD 1 1984 <br>
class Geom2dConvert  {
public:

  DEFINE_STANDARD_ALLOC

  //!  Raised if FromK1 = ToK2 <br>
  Standard_EXPORT   static  Handle_Geom2d_BSplineCurve SplitBSplineCurve(const Handle(Geom2d_BSplineCurve)& C,const Standard_Integer FromK1,const Standard_Integer ToK2,const Standard_Boolean SameOrientation = Standard_True) ;
  
//!  Raised if FromU1 or ToU2 are out of the parametric bounds of the <br>
//!  curve (The tolerance criterion is ParametricTolerance). <br>
//!  Raised if Abs (FromU1 - ToU2) <= ParametricTolerance <br>
//!  Raised if ParametricTolerance < Resolution from gp. <br>
  Standard_EXPORT   static  Handle_Geom2d_BSplineCurve SplitBSplineCurve(const Handle(Geom2d_BSplineCurve)& C,const Standard_Real FromU1,const Standard_Real ToU2,const Standard_Real ParametricTolerance,const Standard_Boolean SameOrientation = Standard_True) ;
  
  Standard_EXPORT   static  Handle_Geom2d_BSplineCurve CurveToBSplineCurve(const Handle(Geom2d_Curve)& C,const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2) ;
  //! This Method concatenates G1 the ArrayOfCurves as far <br>
//!  as it is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedTolerance     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedTolerance contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
  Standard_EXPORT   static  void ConcatG1(TColGeom2d_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColGeom2d_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedFlag,const Standard_Real ClosedTolerance) ;
  //! This Method concatenates C1 the ArrayOfCurves as far <br>
//!  as it is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedTolerance     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedTolerance contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
//! <br>
  Standard_EXPORT   static  void ConcatC1(TColGeom2d_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColStd_HArray1OfInteger)& ArrayOfIndices,Handle(TColGeom2d_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedFlag,const Standard_Real ClosedTolerance) ;
  //! This Method concatenates C1 the ArrayOfCurves as far <br>
//!  as it is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedTolerance     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedTolerance contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
  Standard_EXPORT   static  void ConcatC1(TColGeom2d_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColStd_HArray1OfInteger)& ArrayOfIndices,Handle(TColGeom2d_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedFlag,const Standard_Real ClosedTolerance,const Standard_Real AngularTolerance) ;
  //!  This Method reduces as   far as it  is possible the <br>
//!  multiplicities of  the  knots of  the BSpline BS.(keeping  the geometry). <br>
//!  It returns a new BSpline which could still be C0. <br>
//!  tolerance is a geometrical tolerance <br>
  Standard_EXPORT   static  void C0BSplineToC1BSplineCurve(Handle(Geom2d_BSplineCurve)& BS,const Standard_Real Tolerance) ;
  //!This Method   reduces as far  as  it is possible  the <br>
//!  multiplicities  of  the knots  of the BSpline  BS.(keeping the geometry). <br>
//!  It returns an array of BSpline C1. <br>
//!  Tolerance is a geometrical tolerance <br>
  Standard_EXPORT   static  void C0BSplineToArrayOfC1BSplineCurve(const Handle(Geom2d_BSplineCurve)& BS,Handle(TColGeom2d_HArray1OfBSplineCurve)& tabBS,const Standard_Real Tolerance) ;
  //!This Method   reduces as far  as  it is possible  the <br>
//!  multiplicities  of  the knots  of the BSpline  BS.(keeping the geometry). <br>
//!  It returns an array of BSpline C1. <br>
//!  tolerance is a geometrical tolerance <br>
  Standard_EXPORT   static  void C0BSplineToArrayOfC1BSplineCurve(const Handle(Geom2d_BSplineCurve)& BS,Handle(TColGeom2d_HArray1OfBSplineCurve)& tabBS,const Standard_Real AngularTolerance,const Standard_Real Tolerance) ;





protected:





private:




friend class Geom2dConvert_BSplineCurveKnotSplitting;
friend class Geom2dConvert_BSplineCurveToBezierCurve;
friend class Geom2dConvert_CompCurveToBSplineCurve;
friend class Geom2dConvert_ApproxCurve;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
