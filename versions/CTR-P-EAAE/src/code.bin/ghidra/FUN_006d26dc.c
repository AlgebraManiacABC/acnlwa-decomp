/**
 * FUN_006d26dc.c
 * Source line: 1032279
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006d26dc(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  *(undefined4 *)(DAT_0094fd3c + 0x200) = param_1;
  uRam0094fd0c = 1;
  uRam0094fd2a = param_3;
  DAT_0094fd54 = param_2;
  iVar1 = FUN_006d1ffc(0x45,0);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_0094fd3c + 0x200) = 0;
  }
  return;
}
