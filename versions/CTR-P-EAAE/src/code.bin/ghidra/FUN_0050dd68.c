/**
 * FUN_0050dd68.c
 * Source line: 752152
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0050dd68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_18 [8];
  
  FUN_003504e8(auStack_18);
  FUN_00728014(param_1,auStack_18,param_2,param_3);
  uVar1 = FUN_0034d774(param_1,param_2,auStack_18);
  return (uVar1 & 0x80000000) == 0;
}
