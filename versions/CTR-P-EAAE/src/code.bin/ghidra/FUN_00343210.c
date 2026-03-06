/**
 * FUN_00343210.c
 * Source line: 440774
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00343210(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002b6de0();
  *puVar1 = &UNK_008f7030;
  iVar2 = FUN_00125aec(puVar1 + 0x38);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  *(undefined1 *)(iVar2 + 0x28) = 0;
  return;
}
