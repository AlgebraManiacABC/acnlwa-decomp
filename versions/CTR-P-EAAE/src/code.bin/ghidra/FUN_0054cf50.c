/**
 * FUN_0054cf50.c
 * Source line: 792390
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0054cf50(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x2c,4);
  if (puVar1 != NULL) {
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 0;
    puVar1[3] = 0x3f000000;
    puVar1[4] = 0x3f000000;
    puVar1[5] = 0x3f000000;
    puVar1[6] = 0x3f000000;
    puVar1[8] = 0x80000000;
    *puVar1 = &UNK_0090571c;
    puVar1[7] = param_2;
  }
  return;
}
