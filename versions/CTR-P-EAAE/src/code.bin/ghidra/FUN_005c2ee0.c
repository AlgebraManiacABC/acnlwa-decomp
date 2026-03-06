/**
 * FUN_005c2ee0.c
 * Source line: 872545
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005c2ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_003170f8(0xe,0);
  if (((iVar1 != 0) && (iVar1 = FUN_005c33d0(param_5,0), iVar1 != 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    FUN_00659d9c(param_1,iVar1,param_2,param_3,param_4 ^ 1,0);
  }
  return;
}
