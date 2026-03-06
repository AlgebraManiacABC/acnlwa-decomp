/**
 * FUN_0024b924.c
 * Source line: 299687
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0024b924(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_00613c8c(param_1 + 0xe0,param_2,0xffffffff);
  uVar1 = FUN_00303660(param_1 + 0xe0);
  uVar2 = FUN_00303660(param_1 + 0xd8);
  if (uVar2 <= uVar1) {
    uVar3 = FUN_00303660(param_1 + 0xd8);
    FUN_00613d38(param_1 + 0xe0,uVar3);
    FUN_00303534(param_1 + 0xd8,0);
    return;
  }
  return;
}
