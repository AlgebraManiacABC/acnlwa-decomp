/**
 * FUN_0073e044.c
 * Source line: 1096549
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0073e044(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = FUN_00740528(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != NULL) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,param_2);
    }
    uVar1 |= uVar3;
  }
  return uVar1;
}
