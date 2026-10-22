#include "acnlwa/nw/snd/internal/driver/Channel.h"
#include "acnlwa/nw/snd/internal/driver/Voice.h"
#include "types.h"

extern "C" {
int FUN_004d33d8(...);
int FUN_004d343c(...);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

// was FUN_004d3e8c
void Channel::Release()
{
  int param_1 = (int)this;
  if (*(char *)(param_1 + 0x98) != '\x04') {
    if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
      (*(Voice **)(param_1 + 0x1a8))->SetPriority(1);
    }
    *(undefined1 *)(param_1 + 0x98) = 4;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}

// was FUN_004d4214
Channel::~Channel()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_004d33d8();
  FUN_004d343c(uVar1,param_1 + 0x88);
}

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw
