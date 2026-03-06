/**
 * FUN_00303770.c
 * Source line: 400744
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined * FUN_00303770(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  iVar1 = FUN_0027ab40();
  if (iVar1 != 0) {
    puVar2 = GET_DAT_0095bf74();
    return puVar2;
  }
  iVar1 = FUN_0027ab24(param_1);
  if ((iVar1 != 0) && (uVar3 = FUN_0027a5dc(param_1), uVar3 < 4)) {
    return &DAT_00a84790 + uVar3 * 0xa480;
  }
  return NULL;
}
