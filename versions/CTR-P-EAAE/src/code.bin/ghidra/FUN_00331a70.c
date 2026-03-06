/**
 * FUN_00331a70.c
 * Source line: 434583
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00331a70(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0094d548;
  if (DAT_0094d548 != 0) {
    if (*(int *)(DAT_0094d548 + 0x794) == param_1) {
      FUN_0012eb50(DAT_0094d548);
    }
    if (*(int *)(iVar1 + 0x794) == param_1) {
      *(undefined4 *)(iVar1 + 0x794) = 0;
    }
  }
  return;
}
