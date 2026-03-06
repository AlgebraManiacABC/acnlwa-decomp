/**
 * FUN_00718ef0.c
 * Source line: 1071910
 * Body lines: 2
 */
#include "../../../include/types.h"

bool FUN_00718ef0(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 0xc) + ((int)param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0
  ;
}
