/**
 * FUN_0073dc08.c
 * Source line: 1096286
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_0073dc08(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  return (uVar1 >> 6 & 8) +
         (uVar1 >> 2 & 0xc) + ((uVar1 << 0x1e) >> 0x19) + ((uVar1 << 0x1c) >> 0x1e) * 0x14 +
         *(int *)(param_1 + 0x34);
}
