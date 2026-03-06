/**
 * FUN_00355164.c
 * Source line: 456386
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00355164(int param_1,uint param_2)

{
  FUN_00728fa0();
  *(ushort *)(*(int *)(param_1 + 4) + 6) =
       (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}
