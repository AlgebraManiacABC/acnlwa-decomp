/**
 * FUN_004eb438.c
 * Source line: 732862
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004eb438(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002b5fc4();
  if (iVar1 != 0) {
    uVar2 = FUN_002b5fc4();
    iVar1 = FUN_0071cc4c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_004ee4c0(iVar1,param_2);
      return;
    }
  }
  return;
}
