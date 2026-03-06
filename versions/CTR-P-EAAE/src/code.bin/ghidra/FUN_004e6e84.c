/**
 * FUN_004e6e84.c
 * Source line: 729595
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004e6e84(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_006e0b2c();
  iVar2 = DAT_0095c6d0;
  if ((((iVar1 == 0) || (DAT_0095c6d0 == 0)) || (iVar1 = FUN_005b49e0(param_1), iVar1 == 0)) ||
     (iVar2 = FUN_006c4280((int)*(char *)(iVar2 + 0x1c)), iVar2 != 9)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
