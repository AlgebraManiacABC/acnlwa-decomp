/**
 * FUN_005c00f0.c
 * Source line: 869615
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005c00f0(int param_1,uint param_2,byte param_3)

{
  if (param_2 < 4) {
    *(byte *)(param_1 + param_2) = param_3 & 3;
  }
  return;
}
