/**
 * FUN_0040cafc.c
 * Source line: 576579
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0040cafc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 4;
    if (*(int *)(iVar2 + 0xd0) != 0) {
      FUN_0045c398(uRam0097d450);
      *(undefined4 *)(iVar2 + 0xd0) = 0;
    }
    uVar1 += 1;
  } while (uVar1 < 0xc);
  FUN_00440d30(param_1);
  return;
}
