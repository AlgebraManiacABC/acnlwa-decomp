/**
 * FUN_00756968.c
 * Source line: 1112094
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00756968(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)(uint)*(byte *)(param_1 + 8) < *(int *)(&UNK_0088f364 + uVar1 * 4)) {
      if (0xb < (uVar1 & 0xff)) {
        return 0;
      }
      *param_2 = (uint)*(byte *)(param_1 + 8) - *(int *)(&UNK_0088f334 + (uVar1 & 0xff) * 4);
      return 1;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 0xc);
  return 0;
}
