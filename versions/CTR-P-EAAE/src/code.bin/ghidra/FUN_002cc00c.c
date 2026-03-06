/**
 * FUN_002cc00c.c
 * Source line: 367009
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002cc00c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002682ac();
  puVar1[0x290] = &UNK_008f26a4;
  *puVar1 = &UNK_008f2674;
  iVar2 = FUN_00301d0c(puVar1 + 0x622,FUN_002b9440,0x36c,10);
  iVar2 = FUN_002cdcb0(iVar2 + 0x2238);
  *(undefined4 *)(iVar2 + 0x1e0) = 0;
  *(undefined1 *)(iVar2 + 0x1e4) = 0;
  *(char **)(iVar2 + -0x305c) = "cng_cool_itm";
  *(char **)(iVar2 + -0x3a9c) = "cng_cool_base";
  *(undefined4 *)(iVar2 + -0x3058) = 0xa1877c;
  *(char **)(iVar2 + -0x3054) = "N_itm_pos_00";
  return;
}
