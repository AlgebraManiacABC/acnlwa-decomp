/**
 * FUN_0041c788.c
 * Source line: 585245
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0041c788(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (0xc < param_2) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0x10) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0xf) = 0xff;
  *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0xe) =
       *(undefined2 *)(*(int *)(iRam00974a58 + 0x14) + 0x42);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -8);
  *puVar1 = *(undefined4 *)(param_1 + 0x48);
  puVar1[1] = 0;
  return;
}
