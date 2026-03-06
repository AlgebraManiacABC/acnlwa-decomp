/**
 * FUN_005689d8.c
 * Source line: 810306
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005689d8(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004b4fc8(*(undefined4 *)(param_1 + 0x24));
  piVar2 = *(int **)(iVar1 + 0x10);
  if (piVar2 != (int *)(iVar1 + 0x10)) {
    do {
      *(byte *)(piVar2[2] + 0xb7) = *(byte *)(piVar2[2] + 0xb7) & 0xfe | param_3;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(iVar1 + 0x10));
  }
  return;
}
