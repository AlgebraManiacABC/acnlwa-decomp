/**
 * FUN_006507e8.c
 * Source line: 961977
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006507e8(undefined4 param_1,int param_2,Item_t *param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  Item_Copy((Item_t *)(param_2 + 0x88c),param_3);
  *(undefined4 *)(param_2 + 0x890) = *param_4;
  *(undefined4 *)(param_2 + 0x894) = param_4[1];
  *(undefined4 *)(param_2 + 0x898) = param_4[2];
  *(undefined4 *)(param_2 + 0x89c) = param_1;
  *(byte *)(param_2 + 0x8b9) = *(byte *)(param_2 + 0x8b9) & 0xfc;
  *(undefined1 *)(param_2 + 0x8b8) = param_5;
  return;
}
