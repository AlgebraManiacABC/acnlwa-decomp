#include "acnlwa/audio/bgm/StageOpusRetireDemo.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusRetireDemo::~StageOpusRetireDemo() {}

void StageOpusRetireDemo::VF06() {}

void StageOpusRetireDemo::VF11() {}

// was FUN_005881f4
void StageOpusRetireDemo::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

}  // namespace bgm
}  // namespace audio
