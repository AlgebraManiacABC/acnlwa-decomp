/**
 * FUN_002e6250.c
 * Source line: 381215
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002e6250(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_2 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x19c) = param_1;
  }
  return;
}
