/**
 * FUN_003e73a0.c
 * Source line: 559711
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003e73a0(void)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_008fef48;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x11] = 0;
          // WARNING: Could not recover jumptable at 0x003e73e0. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
