/**
 * FUN_005ca688.c
 * Source line: 878642
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_005ca688(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (-(uint)CARRY4(param_2,param_3) < (uint)(param_2 + param_3 < 0x89b01)) {
    if (iRam0095bf78 != 0) {
      iVar2 = iRam0095bf78 + param_3;
      nnnstdMemCpy(iVar2,param_1,param_2);
      iVar1 = iRam0095bf78;
      FUN_00757f08(iRam0095bf78 + 0x80);
      FUN_0070ef54(iVar1 + 0x71900);
    }
  }
  return iVar2;
}
