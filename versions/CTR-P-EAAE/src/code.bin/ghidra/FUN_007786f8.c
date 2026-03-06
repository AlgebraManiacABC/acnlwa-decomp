/**
 * FUN_007786f8.c
 * Source line: 1135268
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007786f8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc));
  *puVar1 = &UNK_008ee914;
  puVar1[99] = &PTR_DAT_008ee9e4;
  iVar2 = FUN_002d59e8(puVar1 + 0x48);
  iVar2 = FUN_006b14b8(iVar2 + -0x54);
  thunk_FUN_00521ae0(iVar2 + -0xcc);
  FUN_002f88b8();
  return;
}
