/**
 * FUN_0075a5c8.c
 * Source line: 1115423
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0075a5c8(int param_1,undefined1 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  puVar2 = *(undefined1 **)(param_1 + 0x10) + 1;
  *param_2 = **(undefined1 **)(param_1 + 0x10);
  if (param_4 != 0) {
    do {
      nnnstdMemCpy(param_3 + uVar1 * 2,puVar2,2);
      uVar1 += 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 < param_4);
  }
  return;
}
