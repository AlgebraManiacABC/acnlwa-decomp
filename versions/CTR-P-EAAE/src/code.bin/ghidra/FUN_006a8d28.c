/**
 * FUN_006a8d28.c
 * Source line: 1005131
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006a8d28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x254);
  if (iVar2 != 0) {
    param_1 = *(int *)(param_1 + 600);
  }
  if (((iVar2 != 0 && param_1 != 0) && ((*(byte *)(iVar2 + 0xb7) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xb7) & 1) != 0)) {
    uVar1 = FUN_004bef3c();
    return uVar1;
  }
  return 0;
}
