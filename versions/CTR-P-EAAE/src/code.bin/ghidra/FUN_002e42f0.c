/**
 * FUN_002e42f0.c
 * Source line: 379870
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_002e42f0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  FUN_005d867c(auStack_28,param_3,param_4 + 1);
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  puVar1 = (undefined4 *)FUN_003083bc(auStack_1c,param_1 + 0x18,0xb);
  *puVar1 = &DAT_0090aadc;
  FUN_005fcca4(puVar1,auStack_28);
  return auStack_28;
}
