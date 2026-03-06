/**
 * FUN_004a089c.c
 * Source line: 676750
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004a089c(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x20,4);
  if (puVar1 != NULL) {
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 0;
    puVar1[3] = 0x3f000000;
    puVar1[4] = 0x3f000000;
    puVar1[5] = 0x3f000000;
    puVar1[6] = 0x3f000000;
    *puVar1 = &UNK_00901734;
    puVar1[7] = param_2;
  }
  return;
}
