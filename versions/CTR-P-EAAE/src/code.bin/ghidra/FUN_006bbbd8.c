#include "../../../include/types.h"

void FUN_006bbbd8(ushort *param_1,ushort param_2)

{
  *param_1 = *param_1 & 0x8000 | 0x2000;
  param_1[1] = param_1[1] & 0x3fff;
  param_1[1] = param_2 & 0x3fff;
  return;
}
