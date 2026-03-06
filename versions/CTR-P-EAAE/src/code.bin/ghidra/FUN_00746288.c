/**
 * FUN_00746288.c
 * Source line: 1102368
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00746288(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((piVar1 = *(int **)(param_1 + iVar3 * 4 + 0x10), piVar1 == NULL ||
         (iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2), iVar2 == 0))) {
    iVar3 += 1;
    if (3 < iVar3) {
      return 0;
    }
  }
  return 1;
}
