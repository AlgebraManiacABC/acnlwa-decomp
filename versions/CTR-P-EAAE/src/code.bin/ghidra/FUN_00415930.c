/**
 * FUN_00415930.c
 * Source line: 581247
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00415930(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (cRam00974a54 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((cRam00974a54 != '\0' && param_2 < uVar1) && (*(char *)(param_1 + 4) == '\0')) {
    return *(int *)(param_1 + 0xc) + param_2 * 0x10c;
  }
  return 0;
}
