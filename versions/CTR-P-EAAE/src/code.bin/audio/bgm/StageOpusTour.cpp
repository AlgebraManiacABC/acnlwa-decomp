#include "acnlwa/audio/bgm/StageOpusTour.h"
#include "types.h"

extern "C" {
int FUN_00584134(...);
int FUN_0058a17c(...);
int FUN_0058c19c(...);
int FUN_0058c5f0(...);
}

namespace audio {
namespace bgm {

StageOpusTour::~StageOpusTour() {}

void StageOpusTour::VF06() {}

void StageOpusTour::VF07() {}

// was FUN_00585d38
void StageOpusTour::VF10()
{
  undefined4 uVar1;
  
  uVar1 = FUN_00584134();
  FUN_0058c5f0(uVar1,0x25);
  return;
}

// was FUN_00585cf4
void StageOpusTour::VF11()
{
  undefined4 uVar1;
  
  FUN_0058c19c();
  FUN_0058a17c();
  uVar1 = FUN_00584134();
  FUN_0058c5f0(uVar1,0x25);
  return;
}

void StageOpusTour::VF12() {}

void StageOpusTour::VF13() {}

void StageOpusTour::VF16() {}

}  // namespace bgm
}  // namespace audio
