/**
 * FUN_0076239c.c
 * Source line: 1121361
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0076239c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x10000000,uVar1);
  if (iVar2 == 0) {
    pbVar3 = (byte *)(param_1 + 0x91b);
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x907);
  }
  return ((uint)*pbVar3 << 0x19) >> 0x1f;
}
