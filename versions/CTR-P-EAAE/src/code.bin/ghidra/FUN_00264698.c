/**
 * FUN_00264698.c
 * Source line: 311369
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00264698(int param_1,int param_2)

{
  undefined1 auStack_28 [24];
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_0049b8f4(param_2 + 0x40);
  FUN_004f0734();
  FUN_004959d4(param_2,*(undefined4 *)(param_2 + 0xa4),1);
  FUN_004957e4(param_2,0);
  *(undefined4 *)(param_2 + 0x14) = 1;
  uRam00950470 = uRam00975320;
  FUN_0011ef18(*(undefined4 *)(param_1 + 0x88));
  FUN_00561310(auStack_28,*(undefined4 *)(param_1 + 0x88));
  FUN_0074f1c4(auStack_28);
  return;
}
