/**
 * FUN_0040c5e8.c
 * Source line: 576458
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0040c5e8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00439468();
  *puVar1 = &UNK_008ff558;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return;
}
