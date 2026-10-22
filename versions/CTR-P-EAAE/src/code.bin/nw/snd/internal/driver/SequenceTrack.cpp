#include "acnlwa/nw/snd/internal/driver/SequenceTrack.h"
#include "types.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

SequenceTrack::~SequenceTrack() {}

// was FUN_004cb788
int SequenceTrack::GetVariablePtr(int param_2)
{
  int param_1 = (int)this;
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0x10c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw
