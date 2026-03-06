/**
 * FUN_0026b674.c
 * Source line: 315568
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0026b674(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + 0x280;
    if (uVar2 < 4) {
      iVar1 = param_1 + 0x280 + uVar2 * 0x28;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_004ee364(iVar1 + 8,0);
    }
    uVar2 += 1;
  } while (uVar2 < 4);
  return;
}
