/**
 * FUN_001d77c4.c
 * Source line: 240186
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001d77c4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20 [2];
  
  iVar1 = FUN_00749ba4(param_2 + 0x10);
  if (iVar1 != 0) {
    FUN_004c026c(local_20,param_2 + 0x10);
    if (local_20[0] != 0) {
      FUN_004c5cb8(param_1,local_20[0],param_3,param_4);
    }
    FUN_004c0234(local_20);
  }
  return;
}
