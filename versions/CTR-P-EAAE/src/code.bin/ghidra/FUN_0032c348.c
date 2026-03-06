/**
 * FUN_0032c348.c
 * Source line: 431782
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0032c348(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00136e58(*(int *)(param_1 + 4),0);
  }
  if ((*(int *)(param_1 + 0x44) != -1) && (iRam0094cd20 != 0)) {
    iVar1 = FUN_00138c2c(iRam0094cd20,0);
    if ((*(int *)(param_1 + 0x44) <= iVar1) &&
       (iVar1 = FUN_0013d4f0(iRam0094cd20,*(int *)(param_1 + 0x44),0), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}
