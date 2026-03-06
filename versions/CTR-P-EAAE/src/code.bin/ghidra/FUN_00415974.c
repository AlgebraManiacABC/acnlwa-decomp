/**
 * FUN_00415974.c
 * Source line: 581264
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00415974(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x74);
  uVar2 = 0xe0a14827;
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x60);
  }
  if (bVar3 && cVar1 == '\x01') {
    FUN_00426348(param_1 + 0x60);
    uVar2 = 0;
  }
  return uVar2;
}
