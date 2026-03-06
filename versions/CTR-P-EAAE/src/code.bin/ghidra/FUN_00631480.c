/**
 * FUN_00631480.c
 * Source line: 947943
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00631480(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005779a4();
  if (*(int *)(param_1 + 0x1024) != 0) {
    iVar1 = *(int *)(param_1 + 0x660);
    puVar2 = *(undefined4 **)(iVar1 + 0x22c);
    if ((uint)((int)puVar2 - *(int *)(iVar1 + 0x228) >> 2) < *(uint *)(iVar1 + 0x230)) {
      if (puVar2 != NULL) {
        *puVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1024) + 0x660);
      }
      *(int *)(iVar1 + 0x22c) = *(int *)(iVar1 + 0x22c) + 4;
    }
  }
  return;
}
