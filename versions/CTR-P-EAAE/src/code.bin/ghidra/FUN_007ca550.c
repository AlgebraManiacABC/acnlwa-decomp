/**
 * FUN_007ca550.c
 * Source line: 1173486
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_007ca550(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_001ccb14();
  puVar2 = (undefined4 *)FUN_002134a0(iVar1 + 0x7204);
  *puVar2 = &PTR_s_nml_pumps_animal_008f90b0;
  iVar1 = FUN_00301d0c(puVar2 + 3,&UNK_007f3e4c,0x14,10);
  *(undefined2 *)(iVar1 + 200) = 0;
  return iVar1 + -0x7210;
}
