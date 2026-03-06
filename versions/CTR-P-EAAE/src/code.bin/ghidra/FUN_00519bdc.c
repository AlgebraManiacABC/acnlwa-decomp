/**
 * FUN_00519bdc.c
 * Source line: 759575
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00519bdc(void)

{
  uint uVar1;
  
  uVar1 = FUN_0046a174();
  if ((uVar1 & 0x80000000) != 0) {
    return;
  }
  uVar1 = FUN_0046aa80(1);
  FUN_0046eaf0(uVar1,uVar1 & 0x80000000);
  return;
}
