/**
 * FUN_00583624.c
 * Source line: 829009
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00583624(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    iVar2 = DAT_0094d080 + 0xbd8;
    if (uVar1 < 4) {
      iVar2 = DAT_0094d080 + 0xbd8 + uVar1 * 0xc;
    }
    if (*(int *)(iVar2 + 4) == param_1) break;
    uVar1 += 1;
    if (3 < (int)uVar1) {
      return 0;
    }
  }
  return 1;
}
