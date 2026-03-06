/**
 * FUN_00331c1c.c
 * Source line: 434657
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00331c1c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0094d548;
  if ((*(char *)(param_1 + 0x34) != '\0') && (DAT_0094d548 != 0)) {
    if ((*(int *)(DAT_0094d548 + 0x794) == param_1) &&
       (FUN_0012eb50(DAT_0094d548,5), *(int *)(iVar1 + 0x794) == param_1)) {
      *(undefined4 *)(iVar1 + 0x794) = 0;
    }
    FUN_002d27e0(param_1);
    return;
  }
  return;
}
