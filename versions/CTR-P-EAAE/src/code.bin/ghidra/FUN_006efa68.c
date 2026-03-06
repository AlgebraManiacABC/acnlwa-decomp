/**
 * FUN_006efa68.c
 * Source line: 1048561
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006efa68(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  uVar1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  do {
    iVar3 = iVar2 + 1;
    uVar1 += 2;
    *(undefined4 *)(param_1 + iVar2 * 4 + 4) = 0xffffffff;
    iVar2 += 2;
    *(undefined4 *)(param_1 + iVar3 * 4 + 4) = 0xffffffff;
  } while (uVar1 < 0x6ed);
  *param_1 = 0x9b;
  return;
}
