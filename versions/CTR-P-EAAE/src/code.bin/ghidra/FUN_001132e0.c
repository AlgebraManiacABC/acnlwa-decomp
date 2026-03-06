/**
 * FUN_001132e0.c
 * Source line: 113690
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001132e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [24];
  
  FUN_003083bc(auStack_38,auStack_20,0xb);
  iVar1 = FUN_00312a4c(DAT_0095debc,auStack_38,"STR_Common",0x27);
  if (iVar1 != 0) {
    uVar2 = FUN_00312a40(param_1);
    FUN_00308450(auStack_2c,uVar2);
    FUN_0030846c(auStack_2c,auStack_38);
    NOP_003084c8();
  }
  FUN_003084cc(auStack_38);
  return;
}
