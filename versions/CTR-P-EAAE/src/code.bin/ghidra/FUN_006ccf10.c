/**
 * FUN_006ccf10.c
 * Source line: 1029252
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006ccf10(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_003059f8(param_1 + uVar1 * 0x870 + 4);
    uVar1 += 1;
  } while (uVar1 < 0x48);
  FUN_007795bc(param_1 + 0x25f84);
  *(undefined1 *)(param_1 + 0x25f8d) = 0;
  return;
}
