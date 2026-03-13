/**
 * FUN_004df714.c
 * Source line: 724472
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_004df714(int param_1,uint *param_2)

{
  if ((*(int *)(param_1 + 0x88) != 0) && ((*(uint *)(param_1 + 0x34) & 1 << (*param_2 & 0xff)) != 0)
     ) {
    *(uint *)(param_1 + 0x40) = *param_2;
    FUN_00153904(*(int *)(param_1 + 0x88),*param_2);
    return 1;
  }
  return 0;
}
