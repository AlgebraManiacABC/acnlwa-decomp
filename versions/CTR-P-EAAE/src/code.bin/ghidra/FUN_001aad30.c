/**
 * FUN_001aad30.c
 * Source line: 215013
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_001aad30(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(int **)(iVar1 + 0xc) = param_1;
  }
  return iVar1 != 0;
}
