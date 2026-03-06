/**
 * FUN_0065b538.c
 * Source line: 968196
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0065b538(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a)) {
    FUN_006538e0(param_1,0);
    FUN_0064f508(0x3e4ccccd,param_1,0);
  }
  local_10 = param_4;
  if ((*(short *)(param_1 + 0x224) == 0x134) &&
     (iVar1 = FUN_0070ab24(param_1 + 0x1b4,0), iVar1 != 0)) {
    local_10 = 1;
    FUN_0068db1c(0,0x3f800000,0x40c00000,0x40c00000,0x40c00000,param_1,0x135,1,0);
  }
  FUN_0068d170(param_1,0x100056c,0,local_10);
  return;
}
