/**
 * FUN_005c7cdc.c
 * Source line: 876676
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_005c7cdc(undefined4 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_3,param_4);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x14);
    param_1[1] = *(undefined4 *)(iVar1 + 0x18);
    param_1[2] = *(undefined4 *)(iVar1 + 0x1c);
    *param_2 = *(undefined2 *)(iVar1 + 0x2e);
  }
  return iVar1 != 0;
}
