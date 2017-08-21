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

#ifndef SPINECOMLAYER_H_
#define SPINECOMLAYER_H_

#include <forte_config.h>
#include "comlayer.h"
#include <stdint.h>

class CIEC_ANY;

namespace forte {

  namespace com_infra {

    class CSpineComLayer : public CComLayer{
      public:
		  CSpineComLayer(CComLayer* pa_poUpperLayer, CCommFB* pa_poComFB);
        virtual ~CSpineComLayer();

        EComResponse sendData(void *pa_pvData, unsigned int pa_unSize); // top interface, called from top
        EComResponse recvData(const void *pa_pvData, unsigned int pa_unSize);

        EComResponse processInterrupt();

        void closeConnection();

      private:
		EComResponse openConnection(char *pa_acLayerParameter);
    };

  }

}

#endif /* SPINECOMLAYER_H_ */
