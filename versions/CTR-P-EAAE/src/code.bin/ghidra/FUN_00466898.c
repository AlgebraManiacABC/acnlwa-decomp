/**
 * FUN_00466898.c
 * Source line: 632716
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00466898(int param_1,short param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffef | param_2 << 4;
  return;
}
