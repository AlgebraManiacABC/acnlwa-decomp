/**
 * FUN_005c8460.c
 * Source line: 877068
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005c8460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x19))) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c7) << 0x1a))) {
    uVar2 = FUN_006739b8(iVar1,param_1,param_2,0,0,0,0,0,0);
    return uVar2;
  }
  return 0;
}
