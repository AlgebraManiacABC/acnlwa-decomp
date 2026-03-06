/**
 * FUN_0071d090.c
 * Source line: 1074810
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0071d090(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x40))();
  bVar1 = *(byte *)(iVar2 + 0xb7) & 1;
  if ((*(byte *)(iVar2 + 0xb7) & 1) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}
