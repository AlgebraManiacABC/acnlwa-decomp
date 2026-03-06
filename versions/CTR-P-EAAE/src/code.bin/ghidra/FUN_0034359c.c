/**
 * FUN_0034359c.c
 * Source line: 440841
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0034359c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0010b86c();
  if (*(char *)(param_1 + 0xb1b) != '\0') {
    iVar3 = *(int *)(param_1 + 0xb24);
    iVar2 = FUN_001abd24(0,0x3f800000,0,iVar3,0xae,0,2,0,0,0);
    if (iVar2 != 0) {
      *(byte *)(iVar3 + 0x280) = *(byte *)(iVar3 + 0x280) | 4;
    }
  }
  return uVar1;
}
