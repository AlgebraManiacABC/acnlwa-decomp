/**
 * FUN_005c111c.c
 * Source line: 870551
 * Body lines: 9
 */
#include "../../../include/types.h"

FUN_005c111c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003170f8(0xe,0,param_3,param_4,param_4);
  if (((iVar1 != 0) && (iVar1 = FUN_005c33d0(param_5,0), iVar1 != 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    uVar2 = FUN_00659d9c(0,iVar1,param_1,param_2,param_3 ^ 1,param_4);
    return uVar2;
  }
  return 0;
}
