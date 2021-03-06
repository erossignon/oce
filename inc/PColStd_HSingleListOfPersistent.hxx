// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HSingleListOfPersistent_HeaderFile
#define _PColStd_HSingleListOfPersistent_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HSingleListOfPersistent_HeaderFile
#include <Handle_PColStd_HSingleListOfPersistent.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PColStd_HSingleListOfPersistent_HeaderFile
#include <Handle_PColStd_HSingleListOfPersistent.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PMMgt_PManaged_HeaderFile
#include <PMMgt_PManaged.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_Persistent;
class Standard_NoSuchObject;


class PColStd_HSingleListOfPersistent : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColStd_HSingleListOfPersistent();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Handle_PColStd_HSingleListOfPersistent Construct(const Handle(Standard_Persistent)& T) const;
  
  Standard_EXPORT     Handle_Standard_Persistent Value() const;
  
  Standard_EXPORT     Handle_PColStd_HSingleListOfPersistent Tail() const;
  
  Standard_EXPORT     void SwapTail(Handle(PColStd_HSingleListOfPersistent)& WithList) ;
  
  Standard_EXPORT     void SetValue(const Handle(Standard_Persistent)& T) ;
  
  Standard_EXPORT     void ChangeForwardPointer(const Handle(PColStd_HSingleListOfPersistent)& ForwardPointer) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

PColStd_HSingleListOfPersistent(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(Standard_Persistent) _CSFDB_GetPColStd_HSingleListOfPersistentData() const { return Data; }
    void _CSFDB_SetPColStd_HSingleListOfPersistentData(const Handle(Standard_Persistent)& p) { Data = p; }
    Handle(PColStd_HSingleListOfPersistent) _CSFDB_GetPColStd_HSingleListOfPersistentNext() const { return Next; }
    void _CSFDB_SetPColStd_HSingleListOfPersistentNext(const Handle(PColStd_HSingleListOfPersistent)& p) { Next = p; }



  DEFINE_STANDARD_RTTI(PColStd_HSingleListOfPersistent)

protected:




private: 


Handle_Standard_Persistent Data;
Handle_PColStd_HSingleListOfPersistent Next;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HSingleListOfPersistent& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HSingleListOfPersistent& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
