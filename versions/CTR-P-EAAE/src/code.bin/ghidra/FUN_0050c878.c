/**
 * FUN_0050c878.c
 * Source line: 750535
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0050c878(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[10];
  *param_1 = &UNK_0090357c;
  if ((puVar1 != NULL) && (*(char *)(param_1 + 0xe) == '\0')) {
    (**(code **)*puVar1)(puVar1);
    FUN_0013ad90(param_1[10]);
    param_1[10] = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
