#include "acnlwa/nn/snd/CTR/VoiceImpl.h"
#include "types.h"

extern "C" {
int FUN_00464220(...);
}

namespace nn {
namespace snd {
namespace CTR {

// TODO: verify FUN_0046696c
void VoiceImpl::Start()
{
  uint *param_1 = (uint *)this;
  FUN_00464220(0xaea674,*param_1 & 0xff);
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

}  // namespace CTR
}  // namespace snd
}  // namespace nn
