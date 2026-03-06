/**
 * FUN_00746f8c.c
 * Source line: 1103040
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00746f8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x144) == '\0') || (*(char *)(iVar1 + 0x30) != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}
