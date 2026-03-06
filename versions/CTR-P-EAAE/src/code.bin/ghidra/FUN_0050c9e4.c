/**
 * FUN_0050c9e4.c
 * Source line: 750624
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_0050c9e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [12];
  
  FUN_005d867c(auStack_20,param_2,param_3 + 1);
  puVar1 = (undefined4 *)FUN_003083bc(auStack_14,param_1,0x13);
  *puVar1 = &DAT_0090aadc;
  FUN_005fcca4(puVar1,auStack_20);
  return auStack_20;
}
