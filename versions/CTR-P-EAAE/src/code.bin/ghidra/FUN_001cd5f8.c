/**
 * FUN_001cd5f8.c
 * Source line: 234281
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_001cd5f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001ccc58(param_1,6,param_2,0xc,0xc);
  if (iVar1 != 0) {
    *(undefined4 *)
     (*(int *)(param_1 + 8) + ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 +
     -0x20) = param_3;
  }
  return iVar1 != 0;
}
