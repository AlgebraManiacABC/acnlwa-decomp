/**
 * FUN_0069a6f4.c
 * Source line: 1000585
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0069a6f4(int param_1)

{
  int *piVar1;
  undefined2 local_10;
  undefined2 uStack_e;
  int local_c;
  
  piVar1 = (int *)(param_1 + 0xeb60);
  if (*(int *)(param_1 + 0xeb64) != *piVar1) {
    _local_10 = CONCAT22((short)(*(int *)(param_1 + 0xeb64) - *piVar1 >> 5),3);
    local_c = *piVar1;
    FUN_00695ce4(param_1,&local_10);
    return 1;
  }
  return 0;
}
