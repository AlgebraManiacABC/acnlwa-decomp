/**
 * FUN_00623cfc.c
 * Source line: 937406
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_00623cfc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_2 < 4) {
    param_1 += param_2 * 4;
    uVar1 = *(int *)(param_1 + 0x14) + param_3;
    bVar2 = uVar1 < 0xd003;
    if (bVar2) {
      *(uint *)(param_1 + 0x14) = uVar1;
    }
  }
  return bVar2;
}
