/**
 * FUN_004c5670.c
 * Source line: 705829
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_004c5670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = param_4;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_0013dfbc(param_1 + 4,param_4,param_2,param_3);
    *(int *)(param_1 + 0x18) = iVar1;
    return (iVar1 >> 0x1f) + 1;
  }
  iVar1 = FUN_0013dfbc(param_1 + 4,&local_10,param_2,param_3);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x4c56c0);
  }
  *param_4 = local_10;
  return 1;
}
