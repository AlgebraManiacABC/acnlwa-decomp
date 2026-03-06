/**
 * FUN_005db74c.c
 * Source line: 887551
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005db74c(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_002fb378();
  bVar2 = *(char *)(uVar1 + 4) == '\x02';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 5);
  }
  *param_2 = (uint)(!bVar2 || uVar1 != 0x1d);
  return 1;
}
