/**
 * FUN_00412848.c
 * Source line: 579009
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00412848(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *param_3;
  uVar4 = param_3[1];
  plVar2 = (longlong *)FUN_00429234();
  lVar6 = _ll_sdiv(CONCAT44(uVar3 - (uVar4 + (uVar1 < uVar5)),uVar1 - uVar5),*plVar2);
  *(int *)(param_1 + 0x44) = (int)lVar6;
  return;
}
