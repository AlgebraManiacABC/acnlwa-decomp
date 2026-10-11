#include "acnlwa/nw/snd/internal/BasicSound.h"
#include "types.h"

namespace nw {
namespace snd {
namespace internal {

void BasicSound::VF00() {}

BasicSound::~BasicSound() {}

void BasicSound::VF03() {}

void BasicSound::VF04() {}

void BasicSound::VF09() {}

// was FUN_004c47b4
void BasicSound::VF10()
{
  int param_1 = (int)this;
  if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x90)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  if (*(int *)(param_1 + 0xc4) < *(int *)(param_1 + 0xc0)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  return;
}

void BasicSound::VF11() {}

void BasicSound::VF12() {}

}  // namespace internal
}  // namespace snd
}  // namespace nw
