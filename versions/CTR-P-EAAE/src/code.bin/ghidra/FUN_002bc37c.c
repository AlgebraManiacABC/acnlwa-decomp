/**
 * FUN_002bc37c.c
 * Source line: 357715
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002bc37c(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_006e4e80(&DAT_00a14b5c,DAT_00952c3c);
  uVar2 = FUN_005d7530(DAT_0095debc,param_1);
  if ((uVar2 & uVar1) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}
