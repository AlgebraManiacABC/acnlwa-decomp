/**
 * FUN_005af6dc.c
 * Source line: 860878
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005af6dc(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    *param_1 = 0;
    while( true ) {
      param_3 += -1;
      if ((param_3 < 0) || (iVar1 = (int)*param_2, iVar1 == 0)) {
        return 1;
      }
      if (9 < iVar1 - 0x30U) break;
      param_2 = param_2 + 1;
      *param_1 = iVar1 + *param_1 * 10 + -0x30;
    }
  }
  return 0;
}
