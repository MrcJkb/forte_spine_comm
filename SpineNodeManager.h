/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SpineNodeManager
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2017-08-21/Marc Jakobi - HTW Berlin - 
 *************************************************************************/

#ifndef _SPINENODEMANAGER_H_
#define _SPINENODEMANAGER_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_wstring.h>

class FORTE_SpineNodeManager: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_SpineNodeManager)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_WSTRING &ID() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 2, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_SpineNodeManager){
  };

  virtual ~FORTE_SpineNodeManager(){};

};

#endif //close the ifdef sequence from the beginning of the file

