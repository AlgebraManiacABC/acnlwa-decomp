/**
 * FUN_004267c0.c
 * Source line: 590339
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_004267c0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar2 = FUN_004265e4(param_1 + 4,param_2);
    if (-1 < iVar2) {
      uVar1 = FUN_00426ccc(param_2 + 6);
      *(undefined2 *)(param_1 + 0xc) = uVar1;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -0x1f1eb7da;
  }
  return iVar2;
}
