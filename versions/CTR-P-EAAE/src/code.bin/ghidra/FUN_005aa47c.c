/**
 * FUN_005aa47c.c
 * Source line: 856815
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005aa47c(int param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = (*param_2 & 0x7ff03ff) << 5;
  *(uint *)(param_1 + 4) = uVar1 & 0xffff801f | uVar2;
  *(uint *)(param_1 + 4) = (param_2[1] & 0x13fff) << 0xf | uVar1 & 0xe000001f | uVar2;
  return;
}
