/**
 * FUN_001cd6b8.c
 * Source line: 234315
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_001cd6b8(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_001ccc58(param_1,3,param_2,param_4,param_5);
  if (iVar1 != 0) {
    *(undefined1 *)
     (*(int *)(param_1 + 8) + ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 +
     -0x26) = param_3;
    *(undefined2 *)
     (((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + *(int *)(param_1 + 8) +
     -0xc) = 0;
  }
  return iVar1 != 0;
}
