/**
 * FUN_00112d9c.c
 * Source line: 113529
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00112d9c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x2514) = 0xff;
  FUN_002ff408(param_1 + 0x2210);
  iVar2 = 0;
  do {
    FUN_002ff408(iVar2 * 0x280 + param_1 + 0x1810);
    uVar1 = iVar2 << 0x18;
    iVar2 += 1;
    *(undefined2 *)((uVar1 >> 0x17) + param_1 + 0x2492) = 0x7db;
  } while (iVar2 < 4);
  FUN_003122bc(param_1);
  FUN_0031237c(param_1);
  return;
}
