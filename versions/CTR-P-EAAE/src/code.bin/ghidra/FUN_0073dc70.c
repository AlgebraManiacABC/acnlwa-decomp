/**
 * FUN_0073dc70.c
 * Source line: 1096308
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_0073dc70(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  return (uVar1 >> 2 & 0xc) + ((uVar1 << 0x1e) >> 0x19) + ((uVar1 << 0x1c) >> 0x1e) * 0x14 +
         *(int *)(param_1 + 0x34);
}
