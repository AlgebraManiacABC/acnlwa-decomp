/**
 * FUN_00336c0c.c
 * Source line: 436745
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00336c0c(int param_1)

{
  DAT_0098c56c = 1;
  pcRam0098c590 = "SYS_2D_UI";
  uRam0098c57c = 0x50;
  uRam0098c570 = 0xd1;
  uRam0098c574 = 0x4c;
  uRam0098c5a4 = 1;
  uRam0098c5a5 = 1;
  uRam0098c5a6 = 0;
  uRam0098c588 = 0xfffffffe;
  iRam0098c594 = *(int *)(param_1 + 0x8ab0) + 0x55a6;
  FUN_00338d10(param_1);
  *(code **)(param_1 + 0x8c3c) = FUN_00336cb0;
  *(undefined4 *)(param_1 + 0x8c40) = 0;
  FUN_0081a7b8(param_1 + 0x28,FUN_003386c4,0);
  return;
}
