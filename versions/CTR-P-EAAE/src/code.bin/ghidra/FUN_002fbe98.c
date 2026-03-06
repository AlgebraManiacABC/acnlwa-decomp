/**
 * FUN_002fbe98.c
 * Source line: 394568
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002fbe98(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  if (((param_3 < 0x16) && (param_2[10] != param_3)) &&
     (iVar1 = FUN_004a669c(*(int *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0xc) + 8,
                           *(undefined4 *)(param_3 * 4 + 0x953a94)), iVar1 != 0)) {
    param_2[10] = param_3;
    FUN_004f26a4(param_2 + 4,iVar1);
    FUN_004ee904(param_2 + 4,(char)param_2[0xb]);
  }
  if (param_2[6] != 0) {
    FUN_004ee9a8(param_1,param_2 + 4);
    return;
  }
  return;
}
