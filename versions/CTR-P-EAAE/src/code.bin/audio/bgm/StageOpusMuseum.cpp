#include "acnlwa/audio/bgm/StageOpusMuseum.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
}

namespace audio {
namespace bgm {

void StageOpusMuseum::VF03() {}

StageOpusMuseum::~StageOpusMuseum() {}

void StageOpusMuseum::VF06() {}

void StageOpusMuseum::VF07() {}

// was FUN_00586824
void StageOpusMuseum::VF10()
{
  int iVar1;
  
  iVar1 = FUN_00584134();
  *(undefined1 *)(iVar1 + 0x2e) = 1;
  return;
}

void StageOpusMuseum::VF11() {}

void StageOpusMuseum::VF12() {}

void StageOpusMuseum::VF13() {}

void StageOpusMuseum::VF16() {}

}  // namespace bgm
}  // namespace audio
