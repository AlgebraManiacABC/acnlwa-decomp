/**
 * FUN_005c30a0.c
 * Source line: 872629
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005c30a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_005c33d0(4,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    iVar3 = FUN_002fcb34(param_4);
    uVar2 = FUN_0065e2e0(iVar1,param_1,param_2,param_3,1,iVar3 == 0x41);
  }
  return uVar2;
}
