/**
 * FUN_004b9ff0.c
 * Source line: 697314
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_004b9ff0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*piRam00975138 + 8))(piRam00975138,0x20,4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004b6438();
    if (iVar1 != 0) {
      FUN_0013e7d8(param_1 + 4,param_1 + 8,iVar1 + 4);
    }
  }
  return iVar1;
}
