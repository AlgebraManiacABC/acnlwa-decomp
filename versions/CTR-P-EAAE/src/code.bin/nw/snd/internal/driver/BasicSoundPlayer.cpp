#include "acnlwa/nw/snd/internal/driver/BasicSoundPlayer.h"
#include "types.h"

extern "C" {
int FUN_00128b54(...);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

BasicSoundPlayer::~BasicSoundPlayer() {}

void BasicSoundPlayer::BasicSoundPlayer_VF02() {}

// was FUN_004cdeb4
void BasicSoundPlayer::VF03()
{
  int param_1 = (int)this;
  FUN_00128b54(param_1 + 4);
  return;
}

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw
