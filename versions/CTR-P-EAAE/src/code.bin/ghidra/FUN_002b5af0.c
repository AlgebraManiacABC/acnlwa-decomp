/**
 * FUN_002b5af0.c
 * Source line: 353641
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002b5af0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007234f8(param_1 + 0xd4c);
  DAT_0094fd2b = iVar1 == 1;
  if ((bool)DAT_0094fd2b) {
    DAT_0094fd38 = *(undefined4 *)(param_1 + 0x54c8);
  }
  else {
    DAT_0094fd38 = 0xffffffff;
  }
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x294);
}
