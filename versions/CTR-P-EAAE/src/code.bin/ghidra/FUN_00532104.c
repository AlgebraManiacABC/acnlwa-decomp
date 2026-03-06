/**
 * FUN_00532104.c
 * Source line: 775270
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00532104(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 3) && (*(char *)(param_1 + 0x2d8) != '\x03')) {
    FUN_004f26a4(param_1 + 0x298,*(undefined4 *)(param_1 + 0x2b8));
    FUN_004ee9a8(0x3f800000,param_1 + 0x298);
    FUN_004f26a4(param_1 + 0x278,*(undefined4 *)(param_1 + 0x2c0));
    FUN_004ee9cc(0,param_1 + 0x278);
    *(undefined1 *)(param_1 + 0x2d8) = 3;
  }
  iVar1 = FUN_007461b4(param_1 + 0x278);
  if (iVar1 == 0x41000000) {
    FUN_002504d4(param_1 + 0x2dc,0x100066e);
    return;
  }
  return;
}
