/**
 * FUN_0045a0e8.c
 * Source line: 623470
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0045a0e8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != iRam0097d438) {
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = __aeabi_uidivmod(param_2 + -1,*(undefined4 *)(param_1 + 0x34));
      uVar1 = iVar2 + 1;
    }
    if (uVar1 <= (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x1c))) {
      return 1;
    }
  }
  return 0;
}
