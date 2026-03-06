/**
 * FUN_0010b8dc.c
 * Source line: 109616
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0010b8dc(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x164))(param_1);
  if (iVar1 == 0) {
    return 3;
  }
  *(undefined2 *)(param_1 + 0x20c) = 0xc;
  iVar1 = FUN_003040cc(param_1);
  if (iVar1 == 2) {
    if ((*(char *)((int)param_1 + 0xb1a) != '\0') &&
       (iVar1 = (**(code **)(*_DAT_0094d934 + 0x148))(), iVar1 == 0)) {
      return 3;
    }
    iVar1 = 2;
  }
  return iVar1;
}
