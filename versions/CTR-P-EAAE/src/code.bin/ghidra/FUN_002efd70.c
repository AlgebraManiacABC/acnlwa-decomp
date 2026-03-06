/**
 * FUN_002efd70.c
 * Source line: 385908
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002efd70(int param_1)

{
  DAT_0098c56c = 1;
  pcRam0098c590 = "SYS_2D_UI";
  uRam0098c57c = 0x44;
  uRam0098c570 = 0xb3;
  uRam0098c574 = 0x45;
  uRam0098c5a4 = 1;
  uRam0098c5a5 = 1;
  uRam0098c5a6 = 0;
  uRam0098c580 = 0x1000394;
  uRam0098c588 = 0xffffffff;
  FUN_006d351c(1);
  *(uint *)(param_1 + 0x1934) = *(uint *)(param_1 + 0x1934) | 8;
  *(uint *)(param_1 + 0x1304) = *(uint *)(param_1 + 0x1304) | 8;
  return;
}
