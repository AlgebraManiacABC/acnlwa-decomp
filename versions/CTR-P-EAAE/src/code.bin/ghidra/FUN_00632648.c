/**
 * FUN_00632648.c
 * Source line: 948801
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00632648(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x102c) != 0) &&
     (iVar1 = FUN_00318944(*(int *)(param_2 + 0x102c) + 0x28), iVar1 != 0)) {
    FUN_00632904(param_1,param_2,0);
    FUN_00632428(param_1,param_3);
    return;
  }
  return;
}
