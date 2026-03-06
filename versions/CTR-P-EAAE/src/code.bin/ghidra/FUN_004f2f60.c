/**
 * FUN_004f2f60.c
 * Source line: 740735
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_004f2f60(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = param_1 == NULL;
  uVar2 = 0;
  if (!bVar1) {
    param_1 = param_1 + 0x41;
    bVar1 = param_1 == NULL;
  }
  if ((!bVar1) && ((*param_1 & 1) != 0)) {
    uVar2 = param_1[2];
  }
  return uVar2;
}
