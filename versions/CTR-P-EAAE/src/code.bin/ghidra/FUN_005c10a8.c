/**
 * FUN_005c10a8.c
 * Source line: 870534
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005c10a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_003170f8(0xe,0,param_3,param_4,param_4);
  if (((iVar1 != 0) && (iVar1 = FUN_005c33d0(param_5,0), iVar1 != 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    FUN_00659d9c(0,iVar1,param_1,param_2,param_3,param_4);
  }
  return;
}
