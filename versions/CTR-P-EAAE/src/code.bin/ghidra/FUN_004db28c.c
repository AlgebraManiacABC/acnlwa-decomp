/**
 * FUN_004db28c.c
 * Source line: 721995
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004db28c(sbyte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fe8a8(0);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x8a70) = *(uint *)(iVar1 + 0x8a70) | 1 << *param_1;
  }
  return;
}
