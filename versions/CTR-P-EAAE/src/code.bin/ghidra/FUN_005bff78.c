/**
 * FUN_005bff78.c
 * Source line: 869544
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005bff78(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    FUN_00678278(0,iVar1,*(undefined2 *)(&UNK_00881b98 + (param_1 & 3) * 2),0,0,0,0xffffffff,
                 0x100056d);
  }
  return;
}
