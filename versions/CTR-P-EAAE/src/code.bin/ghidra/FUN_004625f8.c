/**
 * FUN_004625f8.c
 * Source line: 629658
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004625f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = (int)(char)iVar1;
    *(undefined2 *)(param_1 + iVar2 * 0x14) = 0xffff;
    FUN_00463bb4(0xaea674,iVar2);
    *(undefined2 *)(param_1 + iVar2 * 0x34 + 0x28) = 0xffff;
    FUN_00463da4(0xaea674,iVar2);
    iVar1 += 1;
  } while (iVar1 < 2);
  return;
}
