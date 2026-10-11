#include "acnlwa/audio/bgm/StageOpusResult.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusResult::~StageOpusResult() {}

void StageOpusResult::VF06() {}

void StageOpusResult::VF08() {}

void StageOpusResult::VF11() {}

// was FUN_00586a14
void StageOpusResult::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

void StageOpusResult::VF14() {}

}  // namespace bgm
}  // namespace audio
