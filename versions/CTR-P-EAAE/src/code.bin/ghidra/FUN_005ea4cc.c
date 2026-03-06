/**
 * FUN_005ea4cc.c
 * Source line: 899065
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005ea4cc(int *param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(**(code **)(*param_1 + 8))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((psVar1 != NULL && iVar2 != 0) && (*psVar1 != 0)) {
    FUN_005ea294(psVar1);
    return;
  }
  return;
}
