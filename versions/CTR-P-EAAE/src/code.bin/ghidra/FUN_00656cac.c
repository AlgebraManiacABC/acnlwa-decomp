/**
 * FUN_00656cac.c
 * Source line: 965545
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00656cac(int param_1)

{
  FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,
               *(undefined2 *)(&UNK_00842c00 + (uint)*(byte *)(param_1 + 0x8d3) * 2),0,0,0xf);
  *(undefined4 *)(param_1 + 0xcdc) = 0;
  *(undefined4 *)(param_1 + 0xce0) = 0;
  return;
}
