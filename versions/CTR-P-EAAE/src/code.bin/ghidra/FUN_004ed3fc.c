/**
 * FUN_004ed3fc.c
 * Source line: 734676
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004ed3fc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004ee4ec();
  puVar1[2] = 0xffffffff;
  *puVar1 = &UNK_00902938;
  iVar2 = FUN_004ee594(puVar1 + 3);
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  return;
}
