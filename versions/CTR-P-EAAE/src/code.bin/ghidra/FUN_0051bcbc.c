/**
 * FUN_0051bcbc.c
 * Source line: 761029
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0051bcbc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_003da660();
  if (iVar1 < 0) {
    *(int *)(param_1 + 0xa4) = iVar1;
    *(undefined4 *)(param_1 + 0xa0) = 3;
    FUN_0051c098(*(undefined4 *)(param_1 + 0x24),FUN_0051beb4,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  FUN_0051b624(param_1);
  return;
}
