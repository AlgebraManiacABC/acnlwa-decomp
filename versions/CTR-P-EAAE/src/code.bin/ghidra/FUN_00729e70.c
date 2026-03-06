/**
 * FUN_00729e70.c
 * Source line: 1082899
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00729e70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 8) == 0) || (*(char *)(param_1 + 0xc) != '\0')) ||
      (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2c), piVar1 == NULL)) ||
     (iVar2 = (**(code **)(*piVar1 + 0x28))(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
