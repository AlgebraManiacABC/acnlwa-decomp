/**
 * FUN_0024f238.c
 * Source line: 301169
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0024f238(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0057b990();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x110) != '\0') {
      FUN_006b0d98(param_1 + 0xcc);
    }
    uVar2 = 1;
  }
  return uVar2;
}
