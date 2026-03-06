/**
 * FUN_005cdab4.c
 * Source line: 880097
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_005cdab4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00718378(param_1 + uVar2 * 4 + 0xe8);
    if (iVar1 != 0) {
      FUN_0024e9d8(param_1 + uVar2 * 4 + 0xe8,param_2,param_3,param_4);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      return uVar2;
    }
    uVar2 += 1;
  } while (uVar2 < 2);
  return 0;
}
