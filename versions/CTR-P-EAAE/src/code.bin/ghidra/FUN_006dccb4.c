/**
 * FUN_006dccb4.c
 * Source line: 1037726
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006dccb4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x677c);
  puVar3 = puVar2 + *(int *)(param_1 + 0x6774);
  while( true ) {
    if (puVar2 == puVar3) {
      return 0;
    }
    uVar1 = thunk_FUN_008b1b88(*puVar2);
    if (uVar1 == (param_2 + 8U & 0xff)) break;
    puVar2 = puVar2 + 1;
  }
  return *puVar2;
}
