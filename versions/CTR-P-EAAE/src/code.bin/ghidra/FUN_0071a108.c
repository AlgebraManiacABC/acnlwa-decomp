/**
 * FUN_0071a108.c
 * Source line: 1072739
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0071a108(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 + 0x29200;
  iVar2 = 0;
  for (; param_1 < uVar3; param_1 += 0xa480) {
    iVar1 = FUN_002fbd54(param_1 + 0x55a6);
    if (iVar1 != 0) {
      iVar2 += 1;
    }
  }
  return iVar2;
}
