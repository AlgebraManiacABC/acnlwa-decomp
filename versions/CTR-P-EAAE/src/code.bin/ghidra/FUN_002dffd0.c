/**
 * FUN_002dffd0.c
 * Source line: 377570
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002dffd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002b6de0();
  *puVar1 = &UNK_008f3594;
  iVar2 = FUN_00125aec(puVar1 + 0x38);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x29) = 0;
  return;
}
