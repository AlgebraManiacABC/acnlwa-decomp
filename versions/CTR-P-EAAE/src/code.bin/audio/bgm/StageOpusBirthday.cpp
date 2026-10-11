#include "acnlwa/audio/bgm/StageOpusBirthday.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058c514(...);
}

namespace audio {
namespace bgm {

StageOpusBirthday::~StageOpusBirthday() {}

void StageOpusBirthday::VF06() {}

void StageOpusBirthday::VF11() {}

// was FUN_00586e84
void StageOpusBirthday::VF12()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c514(uVar1,0x1c);
  return;
}

}  // namespace bgm
}  // namespace audio
