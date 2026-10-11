#include "acnlwa/audio/bgm/StageOpusCeremony.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

void StageOpusCeremony::VF03() {}

StageOpusCeremony::~StageOpusCeremony() {}

void StageOpusCeremony::VF06() {}

void StageOpusCeremony::VF11() {}

// was FUN_00586eb4
void StageOpusCeremony::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,0x15);
  return;
}

void StageOpusCeremony::VF14() {}

}  // namespace bgm
}  // namespace audio
