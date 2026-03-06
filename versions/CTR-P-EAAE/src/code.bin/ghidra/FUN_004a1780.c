/**
 * FUN_004a1780.c
 * Source line: 677287
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004a1780(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x10,4);
  if (puVar1 != NULL) {
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = &PTR_LAB_00901794;
    puVar1[3] = param_2;
  }
  return;
}
