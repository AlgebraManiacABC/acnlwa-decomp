/**
 * FUN_0056ad10.c
 * Source line: 812294
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_0056ad10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = FUN_0056a58c(param_1 + 0xc,param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_00135740(0xae55f0);
      cRam00975c32 += '\x01';
      FUN_00137e84(0xae55f0);
    }
    return iVar1 != 0;
  }
  return false;
}
