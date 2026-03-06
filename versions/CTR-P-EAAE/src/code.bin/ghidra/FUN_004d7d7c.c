/**
 * FUN_004d7d7c.c
 * Source line: 719860
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_004d7d7c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + *(int *)(param_1 + 4) * 4;
  uVar1 = *(uint *)(iVar2 + 0x14);
  iVar3 = (uVar1 >> 7) * 0x84;
  if ((uVar1 & 0x7f) != 0) {
    iVar3 += (uVar1 & 0x7f) + 4 & 0xfffffffe;
  }
  uVar1 = *(uint *)(iVar2 + 0x1c);
  iVar2 = (uVar1 >> 7) * 0x84;
  if ((uVar1 & 0x7f) != 0) {
    iVar2 += (uVar1 & 0x7f) + 4 & 0xfffffffe;
  }
  return (iVar3 + iVar2 + *(int *)(*(int *)(param_1 + 8) + param_1 + 0x1c) * 6) * 4 + 0x3e0;
}
