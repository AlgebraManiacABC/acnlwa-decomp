/**
 * FUN_006eb0e0.c
 * Source line: 1045979
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006eb0e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_007460e8(*(int *)(*(int *)(param_1 + 0x28) + 0x68) + 0xe0);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x68);
    (**(code **)*puVar2)
              (0,0x3f800000,*(undefined4 *)(param_1 + 0x4c4),puVar2,
               *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x830),1,0,0,0);
    *(undefined1 *)(param_1 + 0x4dc) = 1;
  }
  return;
}
