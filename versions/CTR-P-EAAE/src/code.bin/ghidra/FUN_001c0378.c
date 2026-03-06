/**
 * FUN_001c0378.c
 * Source line: 227461
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001c0378(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00116d40();
  *puVar1 = &UNK_008eb5e4;
  puVar1[0x779] = 2;
  *(undefined1 *)(puVar1 + 0x77a) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x1de9) = 1;
  iVar2 = FUN_0020a35c(puVar1 + 0x77f);
  *(undefined1 *)(iVar2 + -0x28) = 0;
  *(undefined1 *)(iVar2 + -0x27) = 1;
  *(undefined4 *)(iVar2 + -8) = 0xffffffff;
  *(undefined4 *)(iVar2 + -4) = 0xffffffff;
  return;
}
