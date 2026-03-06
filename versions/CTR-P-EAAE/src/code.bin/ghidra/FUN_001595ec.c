/**
 * FUN_001595ec.c
 * Source line: 172109
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001595ec(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x3c);
  if (iVar2 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = **(undefined4 **)(*(int *)(*param_1 + 0xc) + iVar2 * 0x10);
  }
  return uVar1;
}
