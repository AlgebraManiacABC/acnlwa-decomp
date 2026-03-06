/**
 * FUN_005af748.c
 * Source line: 860900
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005af748(int *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  
  if (0 < param_3) {
    *param_1 = 0;
    while( true ) {
      param_3 += -1;
      if ((param_3 < 0) || (uVar1 = (uint)*param_2, uVar1 == 0)) {
        return 1;
      }
      if (9 < uVar1 - 0x30) break;
      param_2 = param_2 + 1;
      *param_1 = uVar1 + *param_1 * 10 + -0x30;
    }
  }
  return 0;
}
