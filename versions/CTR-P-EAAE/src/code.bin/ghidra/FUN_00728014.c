/**
 * FUN_00728014.c
 * Source line: 1081267
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00728014(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_0072806c(param_1,param_3,param_4);
  if (iVar1 == 0 || iVar1 == -0x20) {
    uVar2 = 0xc8810bef;
  }
  else {
    if (param_2 != 0) {
      uVar2 = FUN_00350498(auStack_10,iVar1 + 0x20);
      FUN_003081b4(param_2,uVar2);
    }
    uVar2 = 0;
  }
  return uVar2;
}
