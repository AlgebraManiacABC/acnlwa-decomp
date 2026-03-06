/**
 * FUN_00763b00.c
 * Source line: 1122545
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00763b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_20 [16];
  
  FUN_006a6dbc(auStack_20,param_4,param_5);
  fVar2 = (float)FUN_0074fe34(auStack_20,param_3);
  fVar1 = fRam0094df04;
  if (param_6 != 0) {
    *(bool *)param_6 = fVar2 <= fRam0094df04 * fRam0094df04;
  }
  FUN_005d444c(fVar1,param_1,auStack_20,param_3);
  return;
}
