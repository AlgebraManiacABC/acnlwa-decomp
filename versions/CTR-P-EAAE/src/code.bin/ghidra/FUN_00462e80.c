/**
 * FUN_00462e80.c
 * Source line: 630064
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00462e80(undefined4 param_1,int param_2)

{
  if (cRam00aea624 == '\0') {
    return;
  }
  *(undefined4 *)(param_2 * 4 + 0xaea630) = param_1;
  if (cRam00af50dc != '\0') {
    *(undefined4 *)(param_2 * 4 + 0xaf50e8) = param_1;
    FUN_00463cb8(0xaea674);
    return;
  }
  return;
}
