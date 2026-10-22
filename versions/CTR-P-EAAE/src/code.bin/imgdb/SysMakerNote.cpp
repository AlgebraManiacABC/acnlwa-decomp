#include "acnlwa/imgdb/SysMakerNote.h"
#include "types.h"

namespace imgdb {

// was FUN_005a5130
void SysMakerNote::SetDistinctionTypeBit(DistinctionTypeBit param_2)
{
  int param_1 = (int)this;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xf0000fff | param_2 << 0xc;
  return;
}

// was FUN_00754080
uint SysMakerNote::GetShootingType() const
{
  int param_1 = (int)this;
  return (*(uint *)(param_1 + 0x30) & 0xf80) >> 7;
}

// was FUN_00754090
uint SysMakerNote::GetDistinctionTypeBit() const
{
  int param_1 = (int)this;
  return (uint)(*(int *)(param_1 + 0x30) << 0xc) >> 0x18;
}

}  // namespace imgdb
