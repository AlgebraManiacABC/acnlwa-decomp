/**
 * FUN_00450940.c
 * Source line: 616619
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00450940(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    return 0xe0e14826;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return 0xe0a14827;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14); iVar1 != (param_1 - iVar2) + 8;
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
    *(int *)(iVar1 + 0x10) = param_2;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return 0;
}
