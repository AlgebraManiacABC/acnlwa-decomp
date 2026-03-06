/**
 * FUN_001416ec.c
 * Source line: 153911
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_001416ec(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 3) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}
