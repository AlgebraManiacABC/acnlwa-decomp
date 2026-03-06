/**
 * FUN_001b02c0.c
 * Source line: 218231
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001b02c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001c55b0();
  *puVar1 = &UNK_008eb3f8;
  puVar1 = (undefined4 *)FUN_001324a8(puVar1 + 0x278);
  puVar1[3] = 0;
  *puVar1 = &UNK_008ebb18;
  puVar1[7] = 0;
  iVar2 = FUN_002f7604(puVar1 + 8);
  *(char **)(iVar2 + -0x9dc) = "ctlg_cntnt_00";
  *(undefined4 *)(iVar2 + 0xe8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  return;
}
