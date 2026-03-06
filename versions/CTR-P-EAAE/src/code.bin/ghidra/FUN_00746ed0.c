/**
 * FUN_00746ed0.c
 * Source line: 1102928
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00746ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x144) == '\0') || (*(char *)(iVar1 + 0x30) != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x148);
    }
    return uVar2;
  }
  return 0;
}
