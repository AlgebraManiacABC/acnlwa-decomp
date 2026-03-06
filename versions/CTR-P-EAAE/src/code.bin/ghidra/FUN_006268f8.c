/**
 * FUN_006268f8.c
 * Source line: 940383
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_006268f8(uint param_1)

{
  if ((param_1 < 0x96) && (*(int *)(DAT_0095362c + 0x1c) != 0)) {
    return *(int *)(DAT_0095362c + 0x1c) + *(int *)(&UNK_0087b640 + param_1 * 4);
  }
  return 0;
}
