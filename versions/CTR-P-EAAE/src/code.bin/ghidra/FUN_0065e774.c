/**
 * FUN_0065e774.c
 * Source line: 969692
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0065e774(undefined4 param_1,int param_2,Item_t *param_3,undefined4 *param_4)

{
  Item_Copy((Item_t *)(param_2 + 0x88c),param_3);
  *(undefined4 *)(param_2 + 0x89c) = param_1;
  *(undefined4 *)(param_2 + 0x8a0) = *param_4;
  *(undefined4 *)(param_2 + 0x8a4) = param_4[1];
  *(undefined4 *)(param_2 + 0x8a8) = param_4[2];
  *(byte *)(param_2 + 0x8b9) = *(byte *)(param_2 + 0x8b9) & 0xfe | 2;
  *(undefined1 *)(param_2 + 0x8b8) = 1;
  return;
}
