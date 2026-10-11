#include "acnlwa/audio/bgm/StageOpusLobbyIsland.h"
#include "types.h"

extern "C" {
int FUN_00229c50(...);
int FUN_0062f03c(...);
}

namespace audio {
namespace bgm {

void StageOpusLobbyIsland::VF03() {}

StageOpusLobbyIsland::~StageOpusLobbyIsland() {}

void StageOpusLobbyIsland::VF06() {}

void StageOpusLobbyIsland::VF07() {}

void StageOpusLobbyIsland::VF08() {}

void StageOpusLobbyIsland::VF11() {}

// was FUN_005882f4
void StageOpusLobbyIsland::VF12()
{
  int param_1 = (int)this;
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  iVar1 = FUN_0062f03c();
  if ((iVar1 == 3 || iVar1 == 4) || (iVar1 = FUN_00229c50(), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

void StageOpusLobbyIsland::VF17() {}

}  // namespace bgm
}  // namespace audio
