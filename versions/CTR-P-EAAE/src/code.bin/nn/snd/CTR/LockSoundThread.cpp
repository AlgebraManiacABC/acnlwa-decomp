#include "types.h"
#include "acnlwa/nn/os/CriticalSection.h"

extern "C" {
int FUN_00461970(...);
}

namespace nn {
namespace snd {
namespace CTR {

// TODO: verify FUN_0046240c
void LockSoundThread()
{
  int iVar1;
  
  iVar1 = FUN_00461970();
  ((::nn::os::CriticalSection *)(iVar1 + 0x34))->Enter();
  return;
}

}  // namespace CTR
}  // namespace snd
}  // namespace nn
