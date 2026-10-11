#include "acnlwa/audio/bgm/StageOpusEntryDemo.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusEntryDemo::~StageOpusEntryDemo() {}

void StageOpusEntryDemo::VF06() {}

void StageOpusEntryDemo::VF11() {}

// was FUN_00587750
void StageOpusEntryDemo::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,8);
  return;
}

void StageOpusEntryDemo::VF14() {}

}  // namespace bgm
}  // namespace audio
