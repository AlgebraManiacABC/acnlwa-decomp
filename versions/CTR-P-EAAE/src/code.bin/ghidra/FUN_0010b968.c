/**
 * FUN_0010b968.c
 * Source line: 109661
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0010b968(int *param_1)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 0xb1a) != '\0') &&
     (iVar1 = (**(code **)(*_DAT_0094d934 + 0x14c))(), iVar1 == 0)) {
    return 3;
  }
  iVar1 = FUN_00304100(param_1);
  if (iVar1 == 2) {
    iVar1 = (**(code **)(*param_1 + 0x168))(param_1);
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = 2;
  }
  return iVar1;
}
