/**
 * FUN_0030c598.c
 * Source line: 411536
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0030c598(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    iVar3 = iVar1 * 0xc + param_1;
    *(undefined4 *)(param_1 + iVar1 * 0xc) = 0;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined2 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 10) = 0;
    *(undefined1 *)(iVar3 + 0xb) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 0x10);
  return;
}
