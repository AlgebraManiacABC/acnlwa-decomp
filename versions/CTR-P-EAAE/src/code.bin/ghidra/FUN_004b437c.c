/**
 * FUN_004b437c.c
 * Source line: 692912
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004b437c(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b672c();
  iVar2 = *(int *)(param_1 + 4);
  if ((-1 < iVar1) && ((*(uint *)(iVar2 + iVar1 * 0xc) & 0xff000000) != 0)) {
    *param_3 = param_1;
    param_3[1] = iVar1;
    param_3[2] = iVar1 + 1;
    param_3[3] = *(int *)(iVar2 + iVar1 * 0xc + 8);
    return 1;
  }
  return 0;
}
