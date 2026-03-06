/**
 * FUN_00624ee8.c
 * Source line: 938574
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00624ee8(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 < 4) && (iVar2 = DAT_0095362c + 0xb0 + param_1 * 0x18, iVar2 != -8)) {
    if (*(int *)(iVar2 + 0x14) != -1 || *(int *)(iVar2 + 0x10) != -3) {
      uVar1 = 0;
      if (iRam00a220d8 != 0) {
        uVar1 = FUN_00747494(iRam00a220d8,iVar2 + 0x10);
        uVar1 >>= 1;
      }
      return uVar1;
    }
    return 0;
  }
  return 0;
}
