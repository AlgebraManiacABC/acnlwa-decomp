/**
 * FUN_004502b4.c
 * Source line: 616245
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_004502b4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 >> 0x10 == param_3) {
    for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14);
        iVar1 != (param_1 - *(int *)(param_1 + 0x14)) + 8;
        iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
      if (*(uint *)(iVar1 + 0xc) == param_2) {
        return iVar1;
      }
    }
  }
  return 0;
}
