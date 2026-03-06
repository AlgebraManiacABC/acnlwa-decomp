/**
 * FUN_0075ce98.c
 * Source line: 1117499
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0075ce98(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_001391b4(param_1 + 0x32c);
  if ((iVar1 != 0) && (FUN_005ea158(0xad5874,param_2), *pcRam00ad5878 != '\0')) {
    (**(code **)(iRam00ad5874 + 8))(0xad5874);
    iVar1 = FUN_00159880(param_1 + 0x32c,pcRam00ad5878);
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}
