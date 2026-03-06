/**
 * FUN_001138ec.c
 * Source line: 113897
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001138ec(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ConstPackEntry_t *pCVar3;
  
  FUN_00308d4c();
  uVar1 = *(ushort *)(param_2 + 0x2c);
  iVar2 = FUN_00311744(&DAT_00a8349c);
  pCVar3 = Villager_GetConstPackEntry(&Npc_Normal_ConstPack_bin_fileinfo_info,(uint)uVar1);
  if ((iVar2 != 0) && (pCVar3 != NULL)) {
    GET_DAT_0095bf74();
    return;
  }
  return;
}
