/**
 * FUN_00482fec.c
 * Source line: 655071
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00482fec(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *local_134;
  undefined4 auStack_130 [14];
  undefined *local_f8;
  undefined1 auStack_f4 [212];
  
  param_3 += -0x20;
  local_f8 = &UNK_00901250;
  FUN_007e44a8(auStack_f4,param_4,0x10);
  local_134 = &UNK_009011bc;
  auStack_130[0] = 0;
  FUN_00483214(auStack_130,&local_f8,param_2,0xc,0,param_3,0x10);
  uVar1 = FUN_00482e20(&local_134,param_1,param_3,0,0,param_2 + 0x20,param_3,param_2 + 0x10,0x10);
  FUN_004838bc(auStack_130);
  return uVar1;
}
