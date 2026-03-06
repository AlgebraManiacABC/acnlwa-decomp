/**
 * FUN_0054be74.c
 * Source line: 791808
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0054be74(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int local_18;
  
  if (*(char *)(param_3 + 0x28) != '\x01' && *(char *)(param_3 + 0x28) != '\x03') {
    local_18 = 0;
    uVar1 = FUN_0013dfbc(param_3 + 0x14,&local_18,param_4,param_5);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    if (-1 < local_18) {
      if (param_2 != NULL) {
        *param_2 = local_18;
      }
      return (*(int *)(param_1 + 0x50) >> 0x1f) + 1;
    }
  }
  return 0;
}
