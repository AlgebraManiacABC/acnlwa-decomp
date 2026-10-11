#include "acnlwa/audio/bgm/StageOpusComeHomeDemo.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusComeHomeDemo::~StageOpusComeHomeDemo() {}

void StageOpusComeHomeDemo::VF06() {}

void StageOpusComeHomeDemo::VF11() {}

// was FUN_005886e4
void StageOpusComeHomeDemo::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

}  // namespace bgm
}  // namespace audio
