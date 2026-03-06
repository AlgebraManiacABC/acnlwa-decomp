/**
 * FUN_00636bf0.c
 * Source line: 951245
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 * FUN_00636bf0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [36];
  
  iVar1 = ranqd2_ranged_int_from_seed_2(3);
  FUN_005e3550(auStack_30,"STR_Select_Talk",iVar1 + 0x1a,0,0,8,0);
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_00603a28(uVar2,iVar1,auStack_30);
  return auStack_30;
}
