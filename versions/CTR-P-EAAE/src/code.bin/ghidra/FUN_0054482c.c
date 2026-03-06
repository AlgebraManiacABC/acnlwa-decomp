/**
 * FUN_0054482c.c
 * Source line: 787549
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0054482c(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x2c))(param_1 + 0x2c);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (-1 < *(int *)(param_1 + 0x44) << 0x1e)) {
    do {
      FUN_0054482c(*(undefined4 *)(iVar1 + 0x10));
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
    } while (iVar1 != 0);
  }
  return;
}
