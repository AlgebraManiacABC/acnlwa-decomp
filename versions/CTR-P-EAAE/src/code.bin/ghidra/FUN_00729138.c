/**
 * FUN_00729138.c
 * Source line: 1082256
 * Body lines: 6
 */
#include "../../../include/types.h"

ushort FUN_00729138(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 100) == '\0') {
    FUN_00355664();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 6);
  return uVar1 << 8 | uVar1 >> 8;
}
