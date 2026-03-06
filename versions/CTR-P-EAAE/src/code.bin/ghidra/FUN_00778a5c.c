/**
 * FUN_00778a5c.c
 * Source line: 1135424
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00778a5c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008f41fc;
  puVar1[0xc] = &UNK_008f4250;
  iVar2 = FUN_004ecf70(puVar1 + 4);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  FUN_002ffb64(iVar2 + -4);
  return;
}
