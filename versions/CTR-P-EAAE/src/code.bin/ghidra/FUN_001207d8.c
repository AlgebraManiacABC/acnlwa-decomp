/**
 * FUN_001207d8.c
 * Source line: 123378
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001207d8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  *param_1 = &UNK_00906224;
  puVar1 = (undefined4 *)FUN_0012b394(param_1 + 3);
  *puVar1 = &UNK_009061c8;
  puVar1[0x4f] = 0x2010000;
  puVar1 = (undefined4 *)FUN_00125e08(puVar1 + 0x50);
  *puVar1 = &UNK_0090614c;
  puVar1[-0x53] = &UNK_009061b8;
  puVar1[3] = 0;
  iVar2 = FUN_0012ca7c(puVar1 + 4);
  return iVar2 + -0x15c;
}
