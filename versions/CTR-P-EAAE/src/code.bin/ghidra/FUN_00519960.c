/**
 * FUN_00519960.c
 * Source line: 759466
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00519960(void)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_0046a174();
  bVar2 = false;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = FUN_0046aad8(0);
    bVar2 = (uVar1 & 0x80000000) == 0;
    FUN_0046eaf0();
  }
  return bVar2;
}
