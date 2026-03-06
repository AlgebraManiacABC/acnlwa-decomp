/**
 * FUN_001c22a0.c
 * Source line: 229014
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_001c22a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  uRam0094f344 = param_3;
  uRam0094f348 = param_4;
  iRam0094f34c = param_2;
  iVar1 = FUN_00529c80(0x206,param_1,*(undefined4 *)(param_2 + 8),0);
  if (iVar1 != 0) {
    FUN_002b7f74(*(undefined4 *)(param_2 + 8));
  }
  return iVar1;
}
