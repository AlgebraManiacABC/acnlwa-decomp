/**
 * FUN_005d222c.c
 * Source line: 882897
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005d222c(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  
  if (param_3 < 8) {
    FUN_006a5f0c(auStack_30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_006a5f0c(auStack_24,(&DAT_00952dbc)[param_3] + *(int *)(param_1 + 4),
                 *(int *)(param_1 + 8) + *(int *)(&DAT_00952ddc + param_3 * 4));
    uVar1 = FUN_00565a4c(auStack_30,auStack_24);
    *param_2 = uVar1;
    return 1;
  }
  return 0;
}
