#include "acnlwa/imgdb/LegacyTableRecord.h"
#include "types.h"

namespace imgdb {

// was FUN_005aa720
void LegacyTableRecord::Initialize()
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x800000;
  return;
}

}  // namespace imgdb
