/**
 * FUN_0045dc94.c
 * Source line: 626189
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0045dc94(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      FUN_005380a8(iVar1);
      FUN_0053814c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}
