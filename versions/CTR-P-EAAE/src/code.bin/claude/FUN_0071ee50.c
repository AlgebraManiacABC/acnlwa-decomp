/**
 * FUN_0071ee50.c
 * Source line: 1076423
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_0071ee50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = FUN_007237d0(param_1), iVar1 == 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xb4) + 200);
  }
  return uVar2 & 0xff;
}
