/**
 * FUN_0075dfe8.c
 * Source line: 1118317
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined1 FUN_0075dfe8(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 + 0x13200;
  bVar3 = *(char *)(param_1 + 0x132ac) != '\0';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0x132ae);
  }
  if (bVar3 && uVar2 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x13268);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
