/**
 * FUN_005aab94.c
 * Source line: 857380
 * Body lines: 15
 */
#include "../../../include/types.h"

FUN_005aab94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r3;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_005ab768(param_2,param_3,0);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = *(uint *)(param_1 + 0x30) < (uint)uVar4;
  if ((int)-(iVar2 + (uint)bVar3) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar3))) {
    uVar1 = FUN_005a37c4(param_1,param_2,param_3,extraout_r3,param_5,param_6,param_7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
