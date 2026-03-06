/**
 * FUN_002d2048.c
 * Source line: 370996
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_002d2048(int *param_1)

{
  if ((*(int *)(param_1[0x1f] + 8) != 0) &&
     (((*(byte *)(param_1[0x1f] + 0xd) & 1) == 0 || ((char)param_1[0x1e] != '\0')))) {
    (**(code **)(*param_1 + 0x24))();
    return 1;
  }
  return 0;
}
