/**
 * FUN_0044f0f4.c
 * Source line: 615175
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0044f0f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00453b60(param_2,param_3);
  if ((uVar1 < 0xc) || (uVar1 == 0xfe)) {
    for (piVar2 = (int *)(param_1 + 0x3c);
        (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2; piVar2 = piVar2 + 1) {
      if (*(byte *)(*piVar2 + 0x14) == uVar1) {
        return *piVar2;
      }
    }
  }
  return 0;
}
