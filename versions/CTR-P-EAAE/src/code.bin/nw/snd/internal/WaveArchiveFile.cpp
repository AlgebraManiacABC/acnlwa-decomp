#include "acnlwa/nw/snd/internal/WaveArchiveFile.h"
#include "types.h"

namespace nw {
namespace snd {
namespace internal {

// was FUN_0013f3cc
int WaveArchiveFile::FileHeader::GetInfoBlock() const
{
  int param_1 = (int)this;
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}

// was FUN_001434dc
undefined4 WaveArchiveFile::FileHeader::GetInfoBlockOffset() const
{
  int param_1 = (int)this;
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    param_1 += 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    param_1 += 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}

}  // namespace internal
}  // namespace snd
}  // namespace nw
