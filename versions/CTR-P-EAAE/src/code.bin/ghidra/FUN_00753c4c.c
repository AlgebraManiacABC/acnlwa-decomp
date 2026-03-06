/**
 * FUN_00753c4c.c
 * Source line: 1109600
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00753c4c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0058f3ec();
  if ((((uVar1 & *(ushort *)(param_1 + 0x18)) == 0) || (*(byte *)(param_1 + 0x3c) != param_3)) ||
     (*(char *)(param_1 + 0x3d) != param_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
