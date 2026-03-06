/**
 * FUN_007ca5e0.c
 * Source line: 1173502
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_007ca5e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_001ccb14();
  puVar2 = (undefined4 *)FUN_002134a0(iVar1 + 0x7204);
  *puVar2 = &PTR_s_heart_full_008f9150;
  iVar1 = FUN_00301d0c(puVar2 + 3,&UNK_007f58a0,0x14,10);
  *(undefined2 *)(iVar1 + 200) = 0;
  return iVar1 + -0x7210;
}
