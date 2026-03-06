/**
 * FUN_00244a00.c
 * Source line: 296126
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00244a00(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x14) == '\0') && (DAT_00952c3c != 0)) {
    FUN_0027646c();
    FUN_002763bc(DAT_0094cff4,1,param_1);
    uVar1 = FUN_001662e8();
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}
