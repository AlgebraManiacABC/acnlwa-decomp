/**
 * FUN_007786b4.c
 * Source line: 1135252
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_007786b4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008ed714;
  puVar1[0xc] = &UNK_008ed760;
  iVar2 = FUN_004ecf70(puVar1 + 5);
  iVar2 = thunk_FUN_004ee514(iVar2 + -0xc);
  return iVar2 + -8;
}
