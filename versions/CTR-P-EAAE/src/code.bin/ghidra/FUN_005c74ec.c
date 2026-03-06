/**
 * FUN_005c74ec.c
 * Source line: 876275
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005c74ec(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a) < 0) || (5 < param_1)) {
      return 0;
    }
    uVar2 = FUN_006839a8(iVar1,0xffffffff,0xffffffff,param_1,&DAT_0095bfdc,param_2);
  }
  return uVar2;
}
