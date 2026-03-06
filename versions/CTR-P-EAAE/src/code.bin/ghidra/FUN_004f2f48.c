/**
 * FUN_004f2f48.c
 * Source line: 740713
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_004f2f48(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = param_1 == 0;
  if (!bVar1) {
    param_1 += 0x104;
    bVar1 = param_1 == 0;
  }
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}
