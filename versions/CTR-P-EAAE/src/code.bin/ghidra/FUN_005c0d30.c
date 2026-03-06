/**
 * FUN_005c0d30.c
 * Source line: 870308
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c0d30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    if ((*(byte *)(iVar1 + 0x178) & 1) != 0) {
      return 1;
    }
    if (-1 < (int)((uint)DAT_00aaef14 << 0x1b)) {
      uVar2 = FUN_00657928(iVar1,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}
