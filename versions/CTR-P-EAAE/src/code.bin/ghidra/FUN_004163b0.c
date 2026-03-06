/**
 * FUN_004163b0.c
 * Source line: 581850
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004163b0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 4);
  *puVar3 = 1;
  puVar3[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_1 + 0x10);
  FUN_0077956c(puVar3 + 4);
  uVar1 = FUN_0053d2cc(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar3 + 10) = uVar1;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  return;
}
