/**
 * FUN_005b9644.c
 * Source line: 866640
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005b9644(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_2 < *(int *)(&UNK_0088f364 + uVar1 * 4)) {
      if (0xb < (uVar1 & 0xff)) {
        return 0;
      }
      *param_1 = param_2 - *(int *)(&UNK_0088f334 + (uVar1 & 0xff) * 4);
      return 1;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 0xc);
  return 0;
}
