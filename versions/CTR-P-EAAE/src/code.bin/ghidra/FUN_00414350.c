/**
 * FUN_00414350.c
 * Source line: 580217
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_00414350(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = FUN_0053d2cc(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
  }
  return bVar3;
}
