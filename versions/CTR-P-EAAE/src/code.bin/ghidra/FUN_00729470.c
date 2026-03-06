/**
 * FUN_00729470.c
 * Source line: 1082490
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00729470(undefined4 *param_1,int param_2)

{
  undefined1 auStack_128 [256];
  undefined1 auStack_28 [24];
  
  FUN_00489fa0(2,param_2 + 8,auStack_28,0x14);
  FUN_00528924(auStack_28,auStack_128,0x80);
  *param_1 = &UNK_008fe9d0;
  FUN_003548f0(param_1 + 1,auStack_128);
  return;
}
