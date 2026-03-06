/**
 * FUN_00416278.c
 * Source line: 581779
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00416278(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004165c0();
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 += 2;
    *(undefined1 *)(param_1 + iVar2 * 0x28 + 0x114) = 0;
    iVar2 += 2;
    *(undefined1 *)(param_1 + iVar3 * 0x28 + 0x114) = 0;
  } while (iVar1 < 0xc);
  return;
}
