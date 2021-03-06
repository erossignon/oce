// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_StackOfTransient_HeaderFile
#define _TColStd_StackOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_StackNodeOfStackOfTransient_HeaderFile
#include <Handle_TColStd_StackNodeOfStackOfTransient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_StackIteratorOfStackOfTransient;
class Standard_Transient;
class TColStd_StackNodeOfStackOfTransient;



class TColStd_StackOfTransient  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TColStd_StackOfTransient();
  
  Standard_EXPORT    const TColStd_StackOfTransient& Assign(const TColStd_StackOfTransient& Other) ;
   const TColStd_StackOfTransient& operator =(const TColStd_StackOfTransient& Other) 
{
  return Assign(Other);
}
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Depth() const;
  
  Standard_EXPORT    const Handle_Standard_Transient& Top() const;
  
  Standard_EXPORT     void Push(const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT     void Pop() ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_StackOfTransient()
{
  Clear();
}
  
  Standard_EXPORT     Handle_Standard_Transient& ChangeTop() ;


friend class TColStd_StackIteratorOfStackOfTransient;



protected:





private:

  
  Standard_EXPORT   TColStd_StackOfTransient(const TColStd_StackOfTransient& Other);


Standard_Address myTop;
Standard_Integer myDepth;


};

#define Item Handle_Standard_Transient
#define Item_hxx <Standard_Transient.hxx>
#define TCollection_StackNode TColStd_StackNodeOfStackOfTransient
#define TCollection_StackNode_hxx <TColStd_StackNodeOfStackOfTransient.hxx>
#define TCollection_StackIterator TColStd_StackIteratorOfStackOfTransient
#define TCollection_StackIterator_hxx <TColStd_StackIteratorOfStackOfTransient.hxx>
#define Handle_TCollection_StackNode Handle_TColStd_StackNodeOfStackOfTransient
#define TCollection_StackNode_Type_() TColStd_StackNodeOfStackOfTransient_Type_()
#define TCollection_Stack TColStd_StackOfTransient
#define TCollection_Stack_hxx <TColStd_StackOfTransient.hxx>

#include <TCollection_Stack.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
