/**
 * FUN_006c3124.c
 * Source line: 1022414
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006c3124(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  
  FUN_006bffb4(auStack_30,param_3);
  fVar1 = (float)FUN_00565958(0x3e6147ae,0x41200000,param_1 + 0x644,auStack_30);
  fVar2 = (float)FUN_0056b288(local_2c,0x3e4ccccd,0x41200000,0x3f19999a,param_1 + 0x648);
  if (fVar1 == 0.0 && fVar2 == 0.0) {
    FUN_006c00b8(param_1,0,param_2,param_3);
  }
  return;
}
