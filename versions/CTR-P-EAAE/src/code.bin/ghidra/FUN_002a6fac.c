/**
 * FUN_002a6fac.c
 * Source line: 346419
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002a6fac(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0075dc40(param_2);
  if (iVar1 != 0) {
    FUN_006154b0(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = param_3[1];
    *(undefined4 *)(param_1 + 0x18) = param_3[2];
    *(undefined4 *)(param_1 + 0x1c) = param_3[3];
    *(undefined4 *)(param_1 + 0x20) = param_3[4];
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_3 + 5);
    *(undefined1 *)(param_1 + 0x27) = 1;
    *(undefined1 *)(param_1 + 0x26) = param_4;
  }
  return;
}
