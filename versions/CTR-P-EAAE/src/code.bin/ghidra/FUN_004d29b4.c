/**
 * FUN_004d29b4.c
 * Source line: 715916
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004d29b4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(char *)(param_1 + 0xe) = (char)param_2;
  do {
    if ((iVar2 < 0x10) && (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      FUN_004cb7a4(iVar1,param_2);
    }
    iVar2 += 1;
  } while (iVar2 < 0x10);
  return;
}
