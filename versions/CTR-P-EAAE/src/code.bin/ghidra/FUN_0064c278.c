/**
 * FUN_0064c278.c
 * Source line: 959132
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0064c278(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0023a9dc();
  *puVar1 = &UNK_0090ac84;
  puVar1[0x1f] = &UNK_0090ade0;
  iVar2 = FUN_005245bc(puVar1 + 0x98);
  iVar2 = Item_Clear((Item_t *)(iVar2 + 0x24));
  iVar2 = Item_Clear((Item_t *)(iVar2 + 4));
  iVar2 = FUN_0081e8d0(iVar2 + 4);
  *(undefined2 *)(iVar2 + 0x45) = 0;
  FUN_00635974(iVar2 + -0x28c);
  return iVar2 + -0x28c;
}
