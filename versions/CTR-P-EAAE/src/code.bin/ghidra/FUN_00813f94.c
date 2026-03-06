/**
 * FUN_00813f94.c
 * Source line: 1222424
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00813f94(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002fd108(0x20,*(undefined4 *)(param_1 + 4),4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1 = (undefined4 *)FUN_00585c5c();
  *puVar1 = &UNK_009064fc;
  return;
}
