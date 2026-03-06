/**
 * FUN_00109614.c
 * Source line: 108138
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00109614(int param_1)

{
  __rt_memclr_w(param_1,0x9c);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 10;
  FUN_00303cdc(param_1);
  FUN_00303cdc(param_1 + 8);
  FUN_00303534(param_1 + 0x18,0);
  *(undefined4 *)(param_1 + 0x98) = 0xf;
  return;
}
