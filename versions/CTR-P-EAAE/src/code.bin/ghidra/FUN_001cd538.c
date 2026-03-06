/**
 * FUN_001cd538.c
 * Source line: 234259
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_001cd538(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = FUN_001ccc58(param_1,4,param_2,0xc,0xc);
  if (iVar1 != 0) {
    *(undefined2 *)
     (*(int *)(param_1 + 8) + ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -8
     ) = param_3;
    *(undefined2 *)
     (*(int *)(param_1 + 8) + ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 +
     -10) = param_4;
    *(undefined2 *)
     (((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + *(int *)(param_1 + 8) +
     -0xc) = 0;
  }
  return iVar1 != 0;
}
