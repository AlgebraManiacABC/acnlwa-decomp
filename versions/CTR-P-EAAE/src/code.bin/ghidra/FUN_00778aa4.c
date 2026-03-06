/**
 * FUN_00778aa4.c
 * Source line: 1135441
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00778aa4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f41fc;
  puVar1[0xc] = &UNK_008f4250;
  iVar2 = FUN_004ecf70(puVar1 + 4);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  return iVar2 + -4;
}
