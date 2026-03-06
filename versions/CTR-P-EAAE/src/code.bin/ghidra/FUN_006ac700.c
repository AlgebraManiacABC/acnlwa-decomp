/**
 * FUN_006ac700.c
 * Source line: 1007568
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006ac700(int param_1)

{
  int iVar1;
  
  FUN_001ac3cc(param_1 + 4);
  FUN_004edd20(param_1 + 0x78);
  FUN_001ac274(param_1 + 4);
  iVar1 = FUN_006ab41c(param_1);
  if (iVar1 != 0) {
    FUN_003280e0(iVar1 + 0x4b0,param_1 + 0x78,*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x390) != 3) {
    FUN_001cbb20(param_1 + 900,param_1 + 0x78);
    return;
  }
  return;
}
