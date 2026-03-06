/**
 * FUN_0024b850.c
 * Source line: 299626
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0024b850(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_00613c8c(param_1 + 0xd8,param_2,0xffffffff);
  uVar1 = FUN_00303660(param_1 + 0xd8);
  uVar2 = FUN_00303660(param_1 + 0xe0);
  if (uVar2 <= uVar1) {
    uVar3 = FUN_00303660(param_1 + 0xe0);
    FUN_00613d38(param_1 + 0xd8,uVar3);
    FUN_00303534(param_1 + 0xe0,0);
    return;
  }
  return;
}
