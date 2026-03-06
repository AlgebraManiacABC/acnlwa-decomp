/**
 * FUN_00340cf4.c
 * Source line: 439900
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00340cf4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x4980);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5b48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5b4c) = 0xffffffff;
    if (*(char *)(param_1 + 0x5b60) == '\0') {
      FUN_0081a8c4(param_1 + 0x28,FUN_00340870,0);
      return;
    }
    FUN_0081a8c4(param_1 + 0x28,FUN_003405fc,0);
  }
  return;
}
