/**
 * FUN_00723eec.c
 * Source line: 1078774
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined2 FUN_00723eec(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_0076f954(&DAT_00a14b5c,*(undefined2 *)(param_1 + 0x26));
  if (*(int *)(iVar2 + 4) == 0) {
    uVar1 = 0xf7;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x26);
  }
  return uVar1;
}
