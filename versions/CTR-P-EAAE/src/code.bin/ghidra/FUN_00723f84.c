/**
 * FUN_00723f84.c
 * Source line: 1078813
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00723f84(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  bVar2 = param_2 <= uVar1;
  if (uVar1 <= param_2) {
    bVar2 = uVar1 + 10 <= param_2;
  }
  return !bVar2;
}
