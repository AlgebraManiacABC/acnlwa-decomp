/**
 * FUN_001c4bc8.c
 * Source line: 230410
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001c4bc8(int *param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = FUN_00757aa0();
  puVar2 = (ushort *)(*param_1 + iVar1 * 2);
  *puVar2 = *puVar2 & 0xf | param_4;
  return;
}
