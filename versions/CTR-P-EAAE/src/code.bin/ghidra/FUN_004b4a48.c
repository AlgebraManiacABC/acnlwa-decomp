/**
 * FUN_004b4a48.c
 * Source line: 693303
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_004b4a48(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    bVar1 = param_2 == 0;
    if (-1 < param_2) {
      param_4 = *(int *)(param_1 + 0xc);
      bVar1 = param_4 == param_2;
    }
    if ((!bVar1 && (-1 < param_2 && param_2 <= param_4)) &&
       ((*(uint *)(*(int *)(param_1 + 4) + param_2 * 0xc) & 0xff000000) != 0)) {
      *(int *)(param_1 + 0x18) = param_2;
      return 1;
    }
  }
  return 0;
}
