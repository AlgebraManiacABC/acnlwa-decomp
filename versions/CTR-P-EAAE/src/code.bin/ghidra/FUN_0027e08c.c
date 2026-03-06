/**
 * FUN_0027e08c.c
 * Source line: 326127
 * Body lines: 15
 */
#include "../../../include/types.h"

Item_t * FUN_0027e08c(undefined4 param_1,int param_2)

{
  int iVar1;
  Item_t IStack_14;
  Item_t IStack_10;
  
  Item_Set(&IStack_14,0x2242);
  Item_Set(&IStack_10,0x2e59);
  iVar1 = ranqd2_ranged_int_from_seed_2(3);
  if ((int)((uint)*(byte *)(param_2 + 0x5700) * 0x8000000) < 0) {
    iVar1 += 1;
  }
  else {
    iVar1 += 4;
  }
  FUN_00306354(param_1,"Mail_SP_Valentine",iVar1,param_2 + 0x55a6,&IStack_14,5,0);
  FUN_00768138(param_1,&IStack_10,0);
  return &IStack_14;
}
