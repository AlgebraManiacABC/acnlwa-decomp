/**
 * FUN_0074aa9c.c
 * Source line: 1105133
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0074aa9c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0074bf70(*(undefined4 *)(param_1 + 0x144));
  if ((iVar2 != 0) && (iVar3 = FUN_00138c88(), iVar3 != 0)) {
    puVar1 = (undefined4 *)FUN_0073f4a8(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x3c));
    return *puVar1;
  }
  return 0;
}
