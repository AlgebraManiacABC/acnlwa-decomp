/**
 * FUN_004205b0.c
 * Source line: 587164
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004205b0(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 4);
  *puVar2 = 1;
  puVar2[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 0x10);
  FUN_0077956c(puVar2 + 4);
  uVar1 = FUN_0053d2cc(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0;
  return;
}
