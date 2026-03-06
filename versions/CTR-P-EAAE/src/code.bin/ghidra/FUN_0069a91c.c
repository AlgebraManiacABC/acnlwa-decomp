/**
 * FUN_0069a91c.c
 * Source line: 1000689
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0069a91c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xeb54);
  while( true ) {
    if (piVar3 == *(int **)(param_1 + 0xeb58)) {
      return 0;
    }
    piVar1 = (int *)*piVar3;
    if ((piVar1 != NULL) && (*(byte *)((int)piVar1 + 0x95e) == param_2)) break;
    piVar3 = piVar3 + 1;
  }
          // WARNING: Could not recover jumptable at 0x0069a95c. Too many branches
          // WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(*piVar1 + 0xf0))();
  return uVar2;
}
