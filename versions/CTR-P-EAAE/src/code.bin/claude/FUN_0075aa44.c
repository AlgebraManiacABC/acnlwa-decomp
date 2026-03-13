/**
 * FUN_0075aa44.c
 * Source line: 1115634
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0075aa44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
