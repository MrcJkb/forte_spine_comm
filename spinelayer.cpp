/*******************************************************************************
*
* BSD 3-Clause License
*
* Copyright (c) 2017, Marc Jakobi
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* * Redistributions of source code must retain the above copyright notice, this
*   list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright notice,
*   this list of conditions and the following disclaimer in the documentation
*   and/or other materials provided with the distribution.
*
* * Neither the name of the copyright holder nor the names of its
*   contributors may be used to endorse or promote products derived from
*   this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
********************************************************************************
* EEBus SPINE Com Layer
********************************************************************************/
#include "spinelayer.h"
#include "../../arch/devlog.h"
#include "commfb.h"
#include "../../core/datatypes/forte_dint.h"

using namespace forte::com_infra;

CSpineComLayer::CSpineComLayer(CComLayer* pa_poUpperLayer, CCommFB* pa_poComFB) :
    CComLayer(pa_poUpperLayer, pa_poComFB) {
  m_eConnectionState = e_Disconnected;
}

CSpineComLayer::~CSpineComLayer(){
}

void CSpineComLayer::closeConnection(){
  //TODO
 
}

EComResponse forte::com_infra::CSpineComLayer::openConnection(char * pa_acLayerParameter)
{
	return EComResponse();
}

EComResponse CSpineComLayer::sendData(void *pa_pvData, unsigned int pa_unSize){
  EComResponse eRetVal = e_ProcessDataOk;

  if(m_eConnectionState == e_Connected){
    switch (m_poFb->getComServiceType()){
      case e_Server:
		// TODO
		break;
      case e_Client: 
		// TODO
		break;
      case e_Publisher:
        // TODO
        break;
      case e_Subscriber:
        // TODO
        break;
    }
  }
  return eRetVal;
}

EComResponse CSpineComLayer::processInterrupt(){
  // TODO
  return e_Nothing;
}

EComResponse CSpineComLayer::recvData(const void *, unsigned int){
  // TODO
  return e_Nothing;
}

EComResponse CSpineComLayer::openConnection(char *pa_acLayerParameter){
  EComResponse eRetVal = e_InitInvalidId;
  switch (m_poFb->getComServiceType()){
    case e_Server:
      // TODO
      m_eConnectionState = e_Listening;
      break;
    case e_Client: {
      // TODO
      break;
    case e_Publisher:
      // TODO
      break;
    case e_Subscriber:
      // TODO
      break;
  }
  return eRetVal;
}