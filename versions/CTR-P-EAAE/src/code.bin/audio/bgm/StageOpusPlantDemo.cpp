#include "acnlwa/audio/bgm/StageOpusPlantDemo.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

void StageOpusPlantDemo::VF03() {}

StageOpusPlantDemo::~StageOpusPlantDemo() {}

void StageOpusPlantDemo::VF06() {}

void StageOpusPlantDemo::VF11() {}

// was FUN_0058779c
void StageOpusPlantDemo::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

void StageOpusPlantDemo::VF14() {}

}  // namespace bgm
}  // namespace audio
