#include "acnlwa/imgdb/SysMakerNote.h"
#include "types.h"

namespace imgdb {

void SysMakerNote::SetDistinctionTypeBit(DistinctionTypeBit dtb)
{
    unk_0x30 &= 0xf0000fff;
    unk_0x30 |= dtb << 12;
}

uint SysMakerNote::GetShootingType() const
{
    return (unk_0x30 & 0xf80) >> 7;
}

uint SysMakerNote::GetDistinctionTypeBit() const
{
    return (unk_0x30 << 12) >> 24;
}

}  // namespace imgdb
