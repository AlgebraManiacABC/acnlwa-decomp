/**
 * FUN_00746fc8.c
 * Source line: 1103102
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00746fc8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if ((((*(char *)(iVar1 + 0x155) == '\0') || (param_2 != 0)) && (1 < *(byte *)(iVar1 + 0x28))) &&
       (*(char *)(iVar1 + 0x154) != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}
