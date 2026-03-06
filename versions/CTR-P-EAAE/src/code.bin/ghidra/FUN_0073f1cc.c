/**
 * FUN_0073f1cc.c
 * Source line: 1097718
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0073f1cc(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 6) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}
