/**
 * FUN_005aa73c.c
 * Source line: 857104
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005aa73c(int param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = (*param_2 & 0x7fff03ff) << 1;
  *(uint *)(param_1 + 0xc) = uVar1 & 0xfffff801 | uVar2;
  *(uint *)(param_1 + 0xc) = (param_2[1] & 0x7f) << 0xb | uVar1 & 0xfffc0001 | uVar2;
  return;
}
