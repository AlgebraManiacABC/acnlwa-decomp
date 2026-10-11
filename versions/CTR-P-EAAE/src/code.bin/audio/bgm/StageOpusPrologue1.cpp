#include "acnlwa/audio/bgm/StageOpusPrologue1.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusPrologue1::~StageOpusPrologue1() {}

void StageOpusPrologue1::VF06() {}

void StageOpusPrologue1::VF10() {}

void StageOpusPrologue1::VF11() {}

// was FUN_005877ec
void StageOpusPrologue1::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

void StageOpusPrologue1::VF14() {}

void StageOpusPrologue1::VF16() {}

}  // namespace bgm
}  // namespace audio
