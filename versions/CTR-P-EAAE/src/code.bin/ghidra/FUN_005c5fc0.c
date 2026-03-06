/**
 * FUN_005c5fc0.c
 * Source line: 875160
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_005c5fc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) &&
     (iVar1 = FUN_00689120(iVar1,&DAT_0095bfdc,8,param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
