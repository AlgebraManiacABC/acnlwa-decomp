/**
 * FUN_00258e3c.c
 * Source line: 306567
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00258e3c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00597864(*(undefined4 *)(param_1 + 0x22ac));
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x22b0) = 0x10;
      FUN_008177a0(param_1 + 0xa4,&UNK_00258144,0);
    }
    return;
  }
  FUN_008177a0(param_1 + 0xa4,FUN_00258e98,0);
  return;
}
