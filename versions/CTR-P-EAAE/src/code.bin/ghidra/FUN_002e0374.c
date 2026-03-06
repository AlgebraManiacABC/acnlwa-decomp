/**
 * FUN_002e0374.c
 * Source line: 377756
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002e0374(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (*(int *)(iVar1 + 600) != 0) {
    if (*(int *)(*(int *)(iVar1 + 600) + 0xc) != 0) {
      FUN_004b6dc8();
    }
    *(undefined1 *)(iVar1 + 0xd9) = 0;
    if (param_2 != 0) {
      FUN_004b6d74(param_2,*(undefined4 *)(iVar1 + 600));
      *(int *)(iVar1 + 0x500) = param_2;
      *(undefined1 *)(iVar1 + 0xd9) = 1;
    }
  }
  return;
}
