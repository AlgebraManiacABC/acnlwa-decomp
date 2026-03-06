/**
 * FUN_00587db4.c
 * Source line: 833357
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00587db4(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  if (cRam0094e490 != '\0') {
    uVar1 = FUN_00584134();
    FUN_0058c5f0(uVar1,0x2d);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00588cb8();
  return;
}
