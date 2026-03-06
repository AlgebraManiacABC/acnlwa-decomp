/**
 * FUN_004666dc.c
 * Source line: 632635
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004666dc(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       param_2 & 3 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfffc;
  return;
}
