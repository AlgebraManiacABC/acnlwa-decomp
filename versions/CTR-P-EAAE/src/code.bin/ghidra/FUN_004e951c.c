/**
 * FUN_004e951c.c
 * Source line: 731244
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004e951c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  GET_BYTE_00957322();
  uVar1 = FUN_005b42fc();
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(param_1 + uVar2 * 4) == param_2) {
        *(undefined4 *)(param_1 + uVar2 * 4) = 0;
        return 1;
      }
      uVar2 += 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}
