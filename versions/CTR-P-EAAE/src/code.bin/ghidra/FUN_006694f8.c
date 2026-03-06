/**
 * FUN_006694f8.c
 * Source line: 975114
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006694f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0064f368(param_1);
    if (*(char *)(param_1 + 0x8ce) == '\0') {
      FUN_0064dc88(0x41000000,param_1);
      return;
    }
    uVar1 = FUN_0065e098(*(undefined1 *)(param_1 + 0x1a9));
    uVar1 = FUN_0076361c(0,param_1,uVar1);
    uVar2 = FUN_00763a70(0x3fe66666,param_1,0);
    FUN_0068db1c(0,uVar2,0x41000000,0x40c00000,0x40c00000,param_1,uVar1,1,0,0);
  }
  return;
}
