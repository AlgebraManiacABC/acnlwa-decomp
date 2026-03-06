/**
 * FUN_005c1a38.c
 * Source line: 871195
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005c1a38(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c507c(0x21,0);
  if (((iVar1 != 0) && (iVar1 = FUN_005c33d0(4,0), iVar1 != 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    iVar2 = FUN_00656c20();
    FUN_005d41fc(iVar2 + 0xe,param_1);
    *(char *)(iVar2 + 0x12) = (char)((uint)param_2 >> 8);
    *(undefined1 *)(iVar2 + 0x13) = param_3;
    FUN_0064d0b8(iVar1,0x80,iVar2,0);
    return;
  }
  return;
}
