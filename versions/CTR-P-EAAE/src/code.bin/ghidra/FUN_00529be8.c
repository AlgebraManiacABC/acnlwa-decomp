/**
 * FUN_00529be8.c
 * Source line: 769786
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00529be8(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 == 0) || (*(char *)(param_2 + 0x9a8) != '\0')) ||
     (iVar1 = FUN_0075256c(param_2 + 0x868), iVar1 == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + param_1 + 4) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}
