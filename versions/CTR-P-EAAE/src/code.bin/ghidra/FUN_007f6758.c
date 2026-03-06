/**
 * FUN_007f6758.c
 * Source line: 1194257
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_007f6758(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      FUN_007f6758(param_1,*(undefined4 *)(param_2 + 0xc));
      iVar1 = *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
      (*(code *)**(undefined4 **)(param_2 + 0x10))(param_2 + 0x10);
      *(int *)(param_1 + 4) = param_2;
      param_2 = iVar1;
    } while (iVar1 != 0);
    return;
  }
  return;
}
