/**
 * FUN_002fcc54.c
 * Source line: 395220
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002fcc54(int *param_1,uint param_2)

{
  int iVar1;
  
  if (0x15 < param_2) {
    return;
  }
  if ((param_1[10] != param_2) &&
     (iVar1 = FUN_004a669c(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) + 8,
                           *(undefined4 *)(param_2 * 4 + 0x953a94)), iVar1 != 0)) {
    param_1[10] = param_2;
    FUN_004f26a4(param_1 + 4,iVar1);
    FUN_004ee904(param_1 + 4,(char)param_1[0xb]);
    return;
  }
  return;
}
