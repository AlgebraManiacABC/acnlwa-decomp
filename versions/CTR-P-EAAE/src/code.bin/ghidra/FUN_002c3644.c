/**
 * FUN_002c3644.c
 * Source line: 363380
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002c3644(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x1cb) == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      FUN_002aa92c(DAT_0094f524,(int)param_1 + *(int *)(*param_1 + -0xc) + 0xc,
                   *(undefined1 *)((int)param_1 + 0xc9));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
