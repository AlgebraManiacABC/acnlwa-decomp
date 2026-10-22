#include "acnlwa/nn/snd/CTR/VoiceManager.h"
#include "acnlwa/nn/snd/CTR/VoiceImpl.h"
#include "types.h"

namespace nn {
namespace snd {
namespace CTR {

// was FUN_0046135c
void VoiceManager::UpdateWaveBufferList()
{
  int param_1 = (int)this;
  int iVar1;
  
  iVar1 = 0;
  do {
    ((VoiceImpl *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68))->UpdateWaveBufferList();
    iVar1 += 1;
  } while (iVar1 < 0x18);
  return;
}

}  // namespace CTR
}  // namespace snd
}  // namespace nn
