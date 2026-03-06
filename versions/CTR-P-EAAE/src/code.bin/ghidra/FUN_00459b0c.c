/**
 * FUN_00459b0c.c
 * Source line: 623134
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00459b0c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0044e728();
  *puVar1 = &UNK_00900e58;
  iVar2 = FUN_00426900(puVar1 + 0x53);
  iVar2 = FUN_0044fb70(iVar2 + 0x10);
  iVar2 = FUN_00453c20(iVar2 + 8);
  return iVar2 + -0x164;
}
