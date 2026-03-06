/**
 * FUN_0018eb90.c
 * Source line: 203640
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0018eb90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007237e0(*(int *)(param_1 + 0x318) + 0x398);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x31d) = 1;
    FUN_008161b8(param_1,&UNK_0018eb8c,0);
  }
  return;
}
