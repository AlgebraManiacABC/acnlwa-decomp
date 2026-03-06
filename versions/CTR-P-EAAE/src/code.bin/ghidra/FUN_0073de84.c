/**
 * FUN_0073de84.c
 * Source line: 1096434
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0073de84(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = FUN_0074006c(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != NULL) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x28))(piVar2,param_2,param_3);
    }
    uVar1 |= uVar3;
  }
  return uVar1;
}
