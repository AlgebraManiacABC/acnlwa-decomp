#include "acnlwa/nw/snd/internal/StreamSoundFile.h"
#include "types.h"

namespace nw {
namespace snd {
namespace internal {

// TODO: verify FUN_0073eee8
int StreamSoundFile::ChannelInfo::GetDspAdpcmChannelInfo() const
{
  short *param_1 = (short *)this;
  int iVar1;
  
  if (*param_1 == 0x300) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

}  // namespace internal
}  // namespace snd
}  // namespace nw
