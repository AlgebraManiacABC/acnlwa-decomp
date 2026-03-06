/**
 * FUN_004f4b30.c
 * Source line: 740991
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004f4b30(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_18 [12];
  
  iVar1 = (param_2 + 1) % 100;
  if (param_3 < 10) {
    FUN_00100f68(auStack_18,6,L"%d/%d",iVar1,param_3 % 100);
  }
  else {
    FUN_00100f68(auStack_18,6,L"%02d/%02d",iVar1,param_3 % 100);
  }
  FUN_00509a5c(*(undefined4 *)(param_1 + 0x110),auStack_18,"T_page",0,0,0);
  return;
}
