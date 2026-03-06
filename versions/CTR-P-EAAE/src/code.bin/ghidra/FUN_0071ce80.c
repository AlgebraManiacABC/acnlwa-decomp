/**
 * FUN_0071ce80.c
 * Source line: 1074739
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0071ce80(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_006d1e64();
  if (*(char *)(iVar1 + 0x40) != '\0') {
    iVar1 = FUN_006d1e64();
    uStack_c = *(undefined4 *)(*(int *)(iVar1 + 500) + 0x4c4);
    local_10 = *(undefined4 *)(*(int *)(iVar1 + 500) + 0x4c0);
    FUN_004bef3c(*(undefined4 *)(param_1 + 0xc),&local_10);
  }
  return;
}
