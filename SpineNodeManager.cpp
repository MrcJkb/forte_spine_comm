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

#include "SpineNodeManager.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SpineNodeManager_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SpineNodeManager, g_nStringIdSpineNodeManager)

const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdID};

const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_SpineNodeManager::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_SpineNodeManager::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_SpineNodeManager::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_SpineNodeManager::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_SpineNodeManager::scm_anEventOutputNames[] = {g_nStringIdINITO};

const SFBInterfaceSpec FORTE_SpineNodeManager::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_SpineNodeManager::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventINITID:
#error add code for INIT event!
/*
  do not forget to send output event, calling e.g.
      sendOutputEvent(scm_nEventCNFID);
*/
      break;
  }
}



