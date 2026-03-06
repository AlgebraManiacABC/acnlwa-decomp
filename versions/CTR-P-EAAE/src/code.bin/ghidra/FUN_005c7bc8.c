/**
 * FUN_005c7bc8.c
 * Source line: 876603
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005c7bc8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    iVar2 = FUN_00656c20();
    *(undefined4 *)(iVar2 + 0xe) = *param_1;
    *(undefined4 *)(iVar2 + 0x12) = *param_2;
    FUN_0064d0b8(iVar1,0xba,iVar2,0);
    return;
  }
  return;
}
