/**
 * FUN_0075aac8.c
 * Source line: 1115680
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0075aac8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
