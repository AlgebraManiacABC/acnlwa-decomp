/**
 * FUN_0012f824.c
 * Source line: 136187
 * Body lines: 4
 */
#include "../../../include/types.h"

ushort FUN_0012f824(int param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x36);
  *(ushort *)(param_1 + 0x36) = param_2 & 1 | uVar1 & 0xfffe;
  return uVar1 & 1;
}
