/**
 * FUN_002e0308.c
 * Source line: 377739
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e0308(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == -1) {
    return;
  }
  if (*(char *)(param_1 + 0x516) == '\0') {
    FUN_005ea8f8(DAT_0095decc,0,param_3,param_4,param_4);
    FUN_005ea964(DAT_0095decc,param_1 + 0x404,param_3,param_2);
    FUN_005ea8dc(DAT_0095decc,0);
    return;
  }
  return;
}
