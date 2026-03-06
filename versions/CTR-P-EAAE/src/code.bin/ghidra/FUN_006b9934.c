/**
 * FUN_006b9934.c
 * Source line: 1016435
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006b9934(undefined4 param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0076a36c(param_1,param_1);
  puVar1 = (ushort *)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    if ((*puVar1 & 0x7fff) == 0x70) {
      *puVar1 = *puVar1 & 0x8000 | 0x26;
      return;
    }
    puVar1[1] = puVar1[1] & 0x3c78 | 3 | puVar1[1] & 0xc000;
  }
  return;
}
