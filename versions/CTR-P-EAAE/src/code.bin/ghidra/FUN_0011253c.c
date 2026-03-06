/**
 * FUN_0011253c.c
 * Source line: 113247
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0011253c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  __rt_memclr_w(param_1,0x22bcc,param_3,param_4,param_4);
  FUN_00310a30(param_1 + 4);
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      FUN_00308d4c(iVar2 * 0x4a30 + param_1 + 0x1976c + iVar1 * 0x2518);
      iVar1 += 1;
    } while (iVar1 < 2);
    iVar2 += 1;
  } while (iVar2 < 2);
  return;
}
