/**
 * FUN_00237008.c
 * Source line: 288840
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00237008(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x214) = param_2;
  piVar3 = *(int **)(param_1 + 0x22c);
  for (piVar2 = *(int **)(param_1 + 0x228); piVar2 != piVar3; piVar2 = piVar2 + 1) {
    if (*(int *)(*piVar2 + 0xf0) != 0) {
      pbVar1 = (byte *)(*(int *)(*piVar2 + 0xf0) + 0xb06);
      *pbVar1 = *pbVar1 | 0x80;
    }
  }
  return;
}
