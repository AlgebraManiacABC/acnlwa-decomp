/**
 * FUN_005b1a48.c
 * Source line: 863237
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_005b1a48(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001324a8();
  *puVar1 = &UNK_00908068;
  iVar2 = FUN_005b1a1c(puVar1 + 3);
  iVar2 = FUN_0012ca78(iVar2 + 8);
  return iVar2 + -0x14;
}
