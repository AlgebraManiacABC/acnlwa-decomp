/**
 * FUN_0057074c.c
 * Source line: 816395
 * Body lines: 11
 */
#include "../../../include/types.h"

int * FUN_0057074c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if ((((DAT_0094f310 == 0) ||
       (piVar2 = (int *)(DAT_0094f310 + 0x14), *(int **)(param_1 + 0x318) != piVar2)) ||
      (uVar3 = *(uint *)(param_1 + 0x31c), *(uint *)(DAT_0094f310 + 0x18) <= uVar3)) ||
     ((iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 == 0 ||
      (piVar2 = piVar2 + uVar3 * 5 + 3, piVar2 == NULL)))) {
    piVar2 = NULL;
  }
  return piVar2;
}
