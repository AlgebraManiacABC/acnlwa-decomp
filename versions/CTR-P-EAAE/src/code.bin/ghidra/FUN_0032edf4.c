/**
 * FUN_0032edf4.c
 * Source line: 433129
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0032edf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006b04f0(param_1 + 0x4c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x70) + 0x18))(param_1 + 0x70);
    uVar2 = FUN_002fb94c();
    return uVar2;
  }
  return 3;
}
