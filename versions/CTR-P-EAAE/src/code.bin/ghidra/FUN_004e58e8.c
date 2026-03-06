/**
 * FUN_004e58e8.c
 * Source line: 728898
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_004e58e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002f74e0(0x10000000,param_1);
  if (((iVar1 == 0) && (param_1 != 0x55)) && (param_1 != 0x2b && param_1 != 0x67)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
