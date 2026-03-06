/**
 * FUN_0074dcac.c
 * Source line: 1105555
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0074dcac(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar2 = *(int *)(iVar1 + 0x88) == 0;
  if (bVar2) {
    iVar1 = *(int *)(iVar1 + 0x8c);
  }
  if (!bVar2 || iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}
