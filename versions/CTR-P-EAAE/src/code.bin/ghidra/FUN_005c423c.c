/**
 * FUN_005c423c.c
 * Source line: 873634
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005c423c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_18;
  short local_14;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    if (*(char *)(iVar1 + 0x1a9) != -0x1f) {
      FUN_00678300(iVar1,param_1,param_2,param_3);
      return;
    }
    local_14 = (ushort)*(byte *)(iVar1 + 0x8ce) << 8;
    local_18 = (uint)*(byte *)(iVar1 + 0x8ce) << 8;
    FUN_00678300(iVar1,param_1,&local_18,param_3);
  }
  return;
}
