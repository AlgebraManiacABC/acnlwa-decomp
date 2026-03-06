/**
 * FUN_0044f164.c
 * Source line: 615195
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0044f164(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3c);
  if ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2) {
    do {
      iVar1 = FUN_00730d64(*piVar2 + 4,param_2);
      if (iVar1 != 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2);
  }
  return 0;
}
