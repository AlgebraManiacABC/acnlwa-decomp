/**
 * FUN_006dcdac.c
 * Source line: 1037774
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006dcdac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x67b0);
  puVar3 = puVar2 + *(int *)(param_1 + 0x67a8);
  while( true ) {
    if (puVar2 == puVar3) {
      return 0;
    }
    iVar1 = thunk_FUN_008b1b88(*puVar2);
    if (iVar1 == 99) break;
    puVar2 = puVar2 + 1;
  }
  return *puVar2;
}
