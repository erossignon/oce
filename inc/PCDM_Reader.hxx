// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_Reader_HeaderFile
#define _PCDM_Reader_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PCDM_Reader_HeaderFile
#include <Handle_PCDM_Reader.hxx>
#endif

#ifndef _PCDM_ReaderStatus_HeaderFile
#include <PCDM_ReaderStatus.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_Application_HeaderFile
#include <Handle_CDM_Application.hxx>
#endif
class PCDM_DriverError;
class CDM_Document;
class TCollection_ExtendedString;
class CDM_Application;



class PCDM_Reader : public Standard_Transient {

public:

  //! this method is called by the framework before the read method. <br>
  Standard_EXPORT   virtual  Handle_CDM_Document CreateDocument()  = 0;
  //! retrieves the content of the file into a new Document. <br>
  Standard_EXPORT   virtual  void Read(const TCollection_ExtendedString& aFileName,const Handle(CDM_Document)& aNewDocument,const Handle(CDM_Application)& anApplication)  = 0;
  
        PCDM_ReaderStatus GetStatus() const;




  DEFINE_STANDARD_RTTI(PCDM_Reader)

protected:


PCDM_ReaderStatus myReaderStatus;


private: 




};


#include <PCDM_Reader.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
