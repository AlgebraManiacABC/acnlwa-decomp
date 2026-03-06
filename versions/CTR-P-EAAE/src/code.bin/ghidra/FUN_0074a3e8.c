/**
 * FUN_0074a3e8.c
 * Source line: 1105102
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0074a3e8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  while ((iVar1 -= *(int *)(param_1 + 0xcc), iVar1 != (param_1 + 0xc0) - *(int *)(param_1 + 0xcc) &&
         (*(byte *)(iVar1 + 0xc) != param_2))) {
    iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0xcc) + 4);
  }
  return;
}
