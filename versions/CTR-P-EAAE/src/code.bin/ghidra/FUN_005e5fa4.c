/**
 * FUN_005e5fa4.c
 * Source line: 896022
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005e5fa4(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  
  uVar2 = **(ushort **)(param_2 + 0x10) & 0xff;
  if (*(byte *)(param_1 + 0x74) < 10) {
    if (*(byte *)(param_1 + 0x74) != uVar2) {
      return;
    }
  }
  else if (9 < uVar2) {
    return;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2dc))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
