/**
 * FUN_006b1b2c.c
 * Source line: 1010148
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006b1b2c(int param_1)

{
  undefined1 auStack_90 [92];
  int local_34;
  int local_24;
  undefined1 local_10 [4];
  code *local_c;
  
  local_c = FUN_001b6ed8;
  local_10[0] = 2;
  FUN_0011d480(auStack_90,local_10);
  local_24 = param_1 + 0x1b0;
  local_34 = param_1;
  FUN_0055ee10(param_1,auStack_90);
  FUN_00560718(param_1);
  *(undefined1 *)(param_1 + 0x1ad) = 1;
  return;
}
