#include "acnlwa/imgdb/LegacyTable.h"
#include "types.h"

namespace imgdb {

uint LegacyTable::ComputeTableSize(int param_1, ushort param_2)
{
    return param_2 + param_1 * 0x10 + 0x37U & 0xffffffe0;
}

}  // namespace imgdb
