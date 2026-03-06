/**
 * FUN_0027a594.c
 * Source line: 323898
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0027a594(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x29200;
  for (; param_1 < uVar2; param_1 += 0xa480) {
    iVar1 = FUN_002fbd54(param_1 + 0x55a6);
    if (iVar1 != 0) {
      FUN_0027ab50(param_1 + 0x55d2);
    }
  }
  return;
}
