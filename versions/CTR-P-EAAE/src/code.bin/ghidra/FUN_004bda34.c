/**
 * FUN_004bda34.c
 * Source line: 699703
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004bda34(int *param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xe) = param_3 ^ 1;
  }
  return;
}
