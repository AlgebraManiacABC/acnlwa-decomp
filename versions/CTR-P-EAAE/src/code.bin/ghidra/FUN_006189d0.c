/**
 * FUN_006189d0.c
 * Source line: 930248
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_006189d0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x1f0) < 2;
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x1f0) = 2;
    *(undefined1 *)(param_1 + 0x1f1) = 4;
  }
  iVar1 = FUN_00300904();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20c) = 1;
  }
  return bVar2;
}
