/**
 * FUN_0069a974.c
 * Source line: 1000713
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0069a974(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_002fc900();
  if ((iVar1 == 0) && (piVar2 = *(int **)(param_1 + 0xf130), piVar2 != NULL)) {
          // WARNING: Could not recover jumptable at 0x0069a9b8. Too many branches
          // WARNING: Treating indirect jump as call
    uVar3 = (**(code **)(*piVar2 + 200))(piVar2,param_2,param_3);
    return uVar3;
  }
  return 0;
}
