/**
 * FUN_00420460.c
 * Source line: 587081
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_00420460(int param_1)

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
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(iVar2 + 0x14);
  }
  return bVar3;
}
