/**
 * FUN_005c5dc8.c
 * Source line: 875028
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_005c5dc8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == -0x25)) {
    uVar2 = 1;
  }
  return uVar2 ^ 1;
}
