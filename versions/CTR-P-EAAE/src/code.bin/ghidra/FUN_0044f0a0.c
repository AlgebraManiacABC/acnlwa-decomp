/**
 * FUN_0044f0a0.c
 * Source line: 615157
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0044f0a0(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 < 0xc) || (param_2 == 0xfe)) {
    for (piVar1 = (int *)(param_1 + 0x3c);
        (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar1; piVar1 = piVar1 + 1) {
      if (*(byte *)(*piVar1 + 0x14) == param_2) {
        return *piVar1;
      }
    }
  }
  return 0;
}
