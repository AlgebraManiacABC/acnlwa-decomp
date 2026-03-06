/**
 * FUN_0073f208.c
 * Source line: 1097734
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0073f208(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 4) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}
