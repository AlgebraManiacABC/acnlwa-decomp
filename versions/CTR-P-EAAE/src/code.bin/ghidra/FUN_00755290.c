/**
 * FUN_00755290.c
 * Source line: 1110833
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00755290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(char *)(param_1 + 4) == '\0') || (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)))
      || (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c))) ||
     ((iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x228, iVar1 == 0 ||
      (*(char *)(iVar1 + 0x21c) != '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
