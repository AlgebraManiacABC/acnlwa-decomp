/**
 * FUN_003190dc.c
 * Source line: 419534
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003190dc(int param_1)

{
  FUN_00694918(_DAT_0094f708,10);
  DAT_0094fd58 &= 0xffffffdf;
  if (*(char *)(param_1 + 0x25c8) == '\x01') {
    FUN_0031e810(param_1 + 0x20dc);
  }
  FUN_002cd30c(param_1 + 0x32b8);
  FUN_006a40c8(param_1 + 0x25d0);
  FUN_004b9b64(param_1 + 0x310);
  FUN_005697e0(0,param_1 + 0x20b0);
  *(undefined1 *)(param_1 + 0x432) = 1;
  *(undefined1 *)(param_1 + 0x3e20) = 1;
  return;
}
