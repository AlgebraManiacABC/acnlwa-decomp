/**
 * FUN_006a42ac.c
 * Source line: 1002501
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006a42ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar3 = iVar1, iVar2 + -0x124 != param_1 + -0x114) {
    *(undefined1 *)(iVar2 + -4) = 3;
    iVar1 = *(int *)(iVar3 + 4);
    iVar2 = iVar3;
  }
  *(undefined1 *)(param_1 + 0xe25) = 1;
  return;
}
