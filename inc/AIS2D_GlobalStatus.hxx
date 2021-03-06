// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_GlobalStatus_HeaderFile
#define _AIS2D_GlobalStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_GlobalStatus_HeaderFile
#include <Handle_AIS2D_GlobalStatus.hxx>
#endif

#ifndef _AIS2D_DisplayStatus_HeaderFile
#include <AIS2D_DisplayStatus.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _AIS2D_PToListOfInt_HeaderFile
#include <AIS2D_PToListOfInt.hxx>
#endif


//! Stores  information  about objects in graphic context: <br>
//!          - Status Of Display : in the main viewer <br>
//!                                in the  collector <br>
//!                                fully Erased <br>
//!          - Displayed Modes <br>
//!          - Active Selection Modes <br>
//!          - is the Interactive Object Current ? <br>
//!          - Layer Index <br>
class AIS2D_GlobalStatus : public MMgt_TShared {

public:

  //! Initialize GlobalStatus the default properties <br>
  Standard_EXPORT   AIS2D_GlobalStatus();
  //! Initialize GlobalStatus the concrete properties <br>
  Standard_EXPORT   AIS2D_GlobalStatus(const AIS2D_DisplayStatus aStat,const Standard_Integer aDMode,const Standard_Integer aSMode,const Standard_Boolean isHighlight = Standard_False,const Quantity_NameOfColor aHighlCol = Quantity_NOC_WHITE,const Standard_Integer aLayerIndex = 0);
  //! Sets the graphic status <aStat> <br>
        void SetGraphicStatus(const AIS2D_DisplayStatus aStat) ;
  //! Adds the display mode <aMode> to the list of display modes <br>
  Standard_EXPORT     void AddDisplayMode(const Standard_Integer aMode) ;
  //! Removes the display mode <aMode> from the list of display modes <br>
  Standard_EXPORT     void RemoveDisplayMode(const Standard_Integer aMode) ;
  //! Returns True if the list of display modes <br>
//!          contains the display mode <aMode> <br>
  Standard_EXPORT     Standard_Boolean IsDModeIn(const Standard_Integer aMode) const;
  //! Adds the selection mode <aMode> to the list of selection modes <br>
  Standard_EXPORT     void AddSelectionMode(const Standard_Integer aMode) ;
  //! Removes the selection mode <aMode> from the list of selection modes <br>
  Standard_EXPORT     void RemoveSelectionMode(const Standard_Integer aMode) ;
  //! Removes all selection modes from the list of selection modes <br>
  Standard_EXPORT     void ClearSelectionModes() ;
  //! Returns True if the list of selection modes <br>
//!          contains the selection mode <aMode> <br>
  Standard_EXPORT     Standard_Boolean IsSModeIn(const Standard_Integer aMode) const;
  //! Sets the layer index <anIndex> <br>
        void SetLayerIndex(const Standard_Integer anIndex) ;
  //! Sets the highlight status <br>
        void SetHighlightStatus(const Standard_Boolean aStat) ;
  //! Sets the color of highight <br>
        void SetHighlightColor(const Quantity_NameOfColor aHiCol) ;
  //! Return True if SubIntensity is on <br>
        Standard_Boolean IsSubIntensityOn() const;
  //! Sets the SubIntensity <br>
        void SubIntensityOn() ;
  //! Unsets the SubIntensity <br>
        void SubIntensityOff() ;
  //! Indicates the display status <br>
        AIS2D_DisplayStatus GraphicStatus() const;
  //! keeps the information of displayed modes in the <br>
//!          main viewer. <br>
//!          (The convention is that the object is displayed <br>
//!          with the mode 0 in the collector...) <br>
        AIS2D_PToListOfInt DisplayedModes() ;
  //! keeps the active selection modes of the object <br>
//!          in the main viewer. <br>
//!          (The convention is that the active selection mode <br>
//!          for an object in the collector is the mode 0). <br>
        AIS2D_PToListOfInt SelectionModes() ;
  //! Returns True if highlight is on <br>
        Standard_Boolean IsHighlight() const;
  //! Returns the color of highlight <br>
        Quantity_NameOfColor HighlightColor() const;




  DEFINE_STANDARD_RTTI(AIS2D_GlobalStatus)

protected:




private: 


AIS2D_DisplayStatus myStatus;
TColStd_ListOfInteger myDispModes;
TColStd_ListOfInteger mySelModes;
Standard_Integer myLayerIndex;
Standard_Boolean myIsHighl;
Quantity_NameOfColor myHiCol;
Standard_Boolean mySubInt;


};


#include <AIS2D_GlobalStatus.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
