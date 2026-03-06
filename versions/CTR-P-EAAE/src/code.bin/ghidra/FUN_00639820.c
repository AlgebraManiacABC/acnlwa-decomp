/**
 * FUN_00639820.c
 * Source line: 952163
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00639820(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x94];
  if (piVar2 == param_1 || piVar2 == NULL) {
    iVar1 = FUN_0051fb04(*(undefined4 *)(param_1[0x3c] + 0x1030));
    if (-1 < iVar1) {
      GET_DAT_0095bf74();
      return;
    }
  }
  else {
    (**(code **)(*piVar2 + 0x28))(piVar2);
  }
  return;
}
