/**
 * FUN_00599294.c
 * Source line: 845893
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00599294(int *param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_5 & 7;
  uVar1 = (param_5 & 0x70) >> 4;
  if (((param_5 != 0 && uVar2 != 0) && uVar1 != 0) && (uVar2 < 8 && uVar1 < 8)) {
    *param_1 = param_3 + *(int *)(&UNK_0085f1ec + uVar2 * 4);
    *param_2 = *(int *)(&UNK_0085f1ec + uVar1 * 4) + param_4;
    return 1;
  }
  return 0;
}
