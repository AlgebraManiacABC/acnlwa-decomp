#include "acnlwa/nw/snd/internal/SoundArchiveFile.h"
#include "types.h"

namespace nw {
namespace snd {
namespace internal {

// TODO: verify FUN_0073f13c
undefined4 SoundArchiveFile::FileHeader::GetStringBlockSize() const
{
  int param_1 = (int)this;
  if (*(short *)(param_1 + 0x14) == 0x2000) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2000) {
    param_1 += 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2000) {
    param_1 += 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 8);
}

// TODO: verify FUN_0073f174
undefined4 SoundArchiveFile::FileHeader::GetStringBlockOffset() const
{
  int param_1 = (int)this;
  if (*(short *)(param_1 + 0x14) == 0x2000) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2000) {
    param_1 += 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2000) {
    param_1 += 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}

}  // namespace internal
}  // namespace snd
}  // namespace nw
