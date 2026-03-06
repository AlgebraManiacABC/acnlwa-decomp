/**
 * FUN_0053dc48.c
 * Source line: 782806
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0053dc48(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0074e928(param_1,*(int *)(param_1 + 0xc) + param_3);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(iRam009752b8 + 0x14) + 0x20))
                      (*(int **)(iRam009752b8 + 0x14),param_2,param_3);
    if (iVar1 != 0) {
      *(char *)(param_3 + 0xc) = (char)param_2;
    }
  }
  return iVar1;
}
