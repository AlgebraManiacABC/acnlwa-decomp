#include "acnlwa/imgdb/PictureTable.h"
#include "types.h"

namespace imgdb {

// TODO: verify FUN_005a4e5c
int PictureTable::ComputeTableSize(int param_1, unsigned short param_2)
{
  return param_2 + param_1 * 0x98 + 0x18;
}

}  // namespace imgdb
