/**
 * FUN_00246934.c
 * Source line: 297022
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00246934(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x34) == '\0') && (iRam0094d540 != 0)) {
    uVar1 = FUN_00246df4(iRam0094d540,param_1);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 7;
    *(undefined1 *)(param_1 + 0x35) = 1;
    *(undefined1 *)(param_1 + 0x37) = 0;
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_0020a4cc(param_1,param_2,param_3);
    return;
  }
  return;
}
