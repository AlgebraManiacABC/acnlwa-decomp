/**
 * FUN_0054bfc0.c
 * Source line: 791880
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0054bfc0(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int local_1c [2];
  
  if (*(char *)(param_3 + 0x28) != '\0') {
    local_1c[0] = 0;
    uVar1 = FUN_0013e044(param_3 + 0x14,local_1c,param_4,param_5,(int)*(char *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    if (-1 < local_1c[0]) {
      if (param_2 != NULL) {
        *param_2 = local_1c[0];
      }
      return (*(int *)(param_1 + 0x50) >> 0x1f) + 1;
    }
  }
  return 0;
}
