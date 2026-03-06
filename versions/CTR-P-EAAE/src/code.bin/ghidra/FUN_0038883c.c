/**
 * FUN_0038883c.c
 * Source line: 493292
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0038883c(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  FUN_0035b994(&local_20);
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = uStack_1c;
  *(code **)(param_1 + 0x50) = FUN_00387c9c;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 **)(param_1 + 0x58) = &LAB_0038889c;
  return;
}
