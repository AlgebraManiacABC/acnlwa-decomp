#include "acnlwa/nn/snd/CTR/VoiceManager.h"
#include "acnlwa/nn/snd/CTR/VoiceImpl.h"
#include "types.h"

namespace nn {
namespace snd {
namespace CTR {

void VoiceManager::UpdateWaveBufferList()
{
    for (int i=0; i < 24; i++)
    {
        (unk_0x18dc[i]->unk_0x68)->UpdateWaveBufferList();
    }
}

}  // namespace CTR
}  // namespace snd
}  // namespace nn
