/**
 * FUN_0077866c.c
 * Source line: 1135235
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0077866c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008ed714;
  puVar1[0xc] = &UNK_008ed760;
  iVar2 = FUN_004ecf70(puVar1 + 5);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  FUN_002ffb64(iVar2 + -8);
  return;
}
