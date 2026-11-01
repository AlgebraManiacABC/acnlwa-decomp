#include "acnlwa/imgdb/ImageInfo.h"
#include "acnlwa/imgdb/DateTimeSeconds.h"
#include "types.h"

namespace imgdb {

// TODO: verify FUN_005b0438
void ImageInfo::SetShootingType(ShootingType param_2)
{
  int param_1 = (int)this;
  *(uint *)(param_1 + 0x2c) = (uint)param_2 & 0x1f | *(uint *)(param_1 + 0x2c) & 0xffffffe0;
  return;
}

// TODO: verify FUN_005b04d0
void ImageInfo::SetHandleTypeBit(HandleTypeBit param_2)
{
  int param_1 = (int)this;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffe01 | param_2 << 1;
  return;
}

// TODO: verify FUN_005b0504
void ImageInfo::SetDistinctionTypeBit(DistinctionTypeBit param_2)
{
  int param_1 = (int)this;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffe0001f | param_2 << 5;
  return;
}

// TODO: verify FUN_00755558
uint ImageInfo::GetHandleTypeBit() const
{
  int param_1 = (int)this;
  return (uint)(*(int *)(param_1 + 0x28) << 0x17) >> 0x18;
}

// TODO: verify FUN_00755568
uint ImageInfo::GetSaveProcessType() const
{
  int param_1 = (int)this;
  return (*(uint *)(param_1 + 0x2c) & 0x1e00000) >> 0x15;
}

// TODO: verify FUN_00755578
undefined4 ImageInfo::ValidateWithoutPath() const
{
  int param_1 = (int)this;
  if (((*(uint *)(param_1 + 0x28) & 1) != 0) &&
     (((DateTimeSeconds *)(param_1 + 0x14))->IsInvalid() ||
      ((DateTimeSeconds *)(param_1 + 0x1c))->IsInvalid())) {
    return 0;
  }
  return 1;
}

// TODO: verify FUN_007555bc
uint ImageInfo::GetDistinctionTypeBit() const
{
  int param_1 = (int)this;
  return (uint)(*(int *)(param_1 + 0x2c) << 0x13) >> 0x18;
}

}  // namespace imgdb
