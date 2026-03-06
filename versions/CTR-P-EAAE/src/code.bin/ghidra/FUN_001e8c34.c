/**
 * FUN_001e8c34.c
 * Source line: 250594
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_001e8c34(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_00345f60(_DAT_00952630,param_2,param_1,0);
  bVar2 = (uVar1 & 0x80000000) == 0;
  if (bVar2) {
    FUN_00135520(_DAT_00952630);
  }
  return bVar2;
}
