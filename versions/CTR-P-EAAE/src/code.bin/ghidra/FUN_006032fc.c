/**
 * FUN_006032fc.c
 * Source line: 919060
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006032fc(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x360);
  *puVar1 = 0;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  *(undefined1 *)puVar1[4] = 0;
  *(undefined1 *)puVar1[9] = 0;
  (**(code **)(puVar1[0x13] + 0x1c))(puVar1 + 0x13);
  *(undefined1 *)(puVar1 + 0x1e) = 3;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  return;
}
