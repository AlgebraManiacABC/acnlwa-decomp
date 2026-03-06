/**
 * FUN_004aa000.c
 * Source line: 684710
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 FUN_004aa000(int *param_1,undefined4 param_2)

{
  (*pcRam0097e494)(param_2,*param_1);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  return 0;
}
