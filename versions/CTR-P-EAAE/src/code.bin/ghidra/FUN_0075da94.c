/**
 * FUN_0075da94.c
 * Source line: 1118068
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0075da94(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x9b0) == 0) || (0xc < param_2)) ||
     (iVar2 = *(int *)(param_1 + 0x9b0) + param_2 * 0x42, iVar2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar2 + 0x21;
    *(undefined1 *)(iVar2 + 0x41) = 0;
  }
  return iVar1;
}
