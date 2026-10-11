#include "acnlwa/audio/bgm/StageOpusUpdatePrologue.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
}

namespace audio {
namespace bgm {

void StageOpusUpdatePrologue::VF03() {}

StageOpusUpdatePrologue::~StageOpusUpdatePrologue() {}

void StageOpusUpdatePrologue::VF06() {}

// was FUN_005887a0
void StageOpusUpdatePrologue::VF10()
{
  int iVar1;
  
  iVar1 = FUN_00584134();
  *(undefined1 *)(iVar1 + 0x2e) = 1;
  return;
}

void StageOpusUpdatePrologue::VF11() {}

void StageOpusUpdatePrologue::VF14() {}

void StageOpusUpdatePrologue::VF16() {}

}  // namespace bgm
}  // namespace audio
