#include "acnlwa/nw/snd/internal/WaveSound.h"
#include "types.h"

extern "C" {
int FUN_004c4324(...);
}

namespace nw {
namespace snd {
namespace internal {

void WaveSound::VF00() {}

WaveSound::~WaveSound() {}

// was FUN_004d4564
void WaveSound::VF03()
{
  int param_1 = (int)this;
  FUN_004c4324();
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  return;
}

void WaveSound::VF04() {}

void WaveSound::VF05() {}

void WaveSound::VF06() {}

void WaveSound::VF07() {}

void WaveSound::VF08() {}

void WaveSound::VF09() {}

void WaveSound::VF11() {}

}  // namespace internal
}  // namespace snd
}  // namespace nw
