#include "acnlwa/imgdb/ImageDbRecordLink.h"
#include "types.h"

namespace imgdb {

// was FUN_005aa4bc
void ImageDbRecordLink::SetStorageType(StorageType param_2)
{
  int param_1 = (int)this;
  *(uint *)(param_1 + 4) = (uint)param_2 & 3 | *(uint *)(param_1 + 4) & 0xfffffffc;
  return;
}

// was FUN_005aa4d4
void ImageDbRecordLink::SetDbRecordIndex(int param_2)
{
  uint *param_1 = (uint *)this;
  *param_1 = *param_1 & 0x3ffff | param_2 << 0x12;
  return;
}

}  // namespace imgdb
