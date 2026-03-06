/**
 * FUN_0061f920.c
 * Source line: 934749
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0061f920(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00301d0c(param_1 + 4,FUN_001b4b7c,0x2e,4);
  puVar2 = (undefined4 *)(iVar1 + -4);
  iVar1 = 0;
  do {
    FUN_003052f0((int)puVar2 + iVar1 * 0x2e + 4);
    iVar1 += 1;
  } while (iVar1 < 4);
  *puVar2 = 0;
  return puVar2;
}
