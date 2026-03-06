/**
 * FUN_005bb594.c
 * Source line: 867268
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005bb594(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  Item_t IStack_294;
  undefined1 auStack_290 [644];
  
  FUN_002ff368(auStack_290);
  uVar1 = Item_Set(&IStack_294,0x223f);
  FUN_00306354(auStack_290,"Mail_SP_Mysterycat",1,param_1 + 0x55a6,uVar1,0x19,0);
  uVar1 = Item_Set(&IStack_294,0x3343);
  FUN_00768138(auStack_290,uVar1,1);
  iVar2 = FUN_002ff4d4(auStack_290,3,0);
  if (iVar2 == 0) {
    FUN_0030dad8(param_1 + 0x8ebe,9,399,0,0);
  }
  FUN_002f77e8(auStack_290);
  return;
}
