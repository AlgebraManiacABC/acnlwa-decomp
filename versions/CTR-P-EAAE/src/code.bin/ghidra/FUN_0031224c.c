/**
 * FUN_0031224c.c
 * Source line: 415293
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0031224c(undefined2 *param_1,undefined1 param_2,Item_t *param_3,undefined1 param_4)

{
  undefined2 uVar1;
  
  uVar1 = Item_GetRawID(param_3);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((int)param_1 + 3) = param_4;
  return;
}
