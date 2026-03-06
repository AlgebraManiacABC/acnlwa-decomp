/**
 * FUN_00440960.c
 * Source line: 606493
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00440960(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_004278c0(param_1 + 8,param_2,param_1 + 0x18,0x20);
  puVar3 = (undefined1 *)(param_3 + -1);
  puVar1 = (undefined1 *)(param_1 + 0x17);
  iVar2 = 0x10;
  do {
    iVar2 += -1;
    puVar1[1] = puVar3[1];
    puVar3 = puVar3 + 2;
    puVar1 = puVar1 + 2;
    *puVar1 = *puVar3;
  } while (iVar2 != 0);
  return 0;
}
