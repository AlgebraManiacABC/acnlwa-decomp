/**
 * FUN_006d33c8.c
 * Source line: 1032926
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006d33c8(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int extraout_r3;
  
  *(undefined4 *)(DAT_0094fd3c + 0x200) = param_1;
  uRam0094fd0c = 1;
  uRam0094fd2a = param_3;
  DAT_0094fd54 = param_2;
  iVar1 = FUN_006d265c(0x46);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(extraout_r3 + 0x30) + 0x200) = 0;
    *(undefined1 *)(extraout_r3 + 0xc) = 0;
  }
  return;
}
