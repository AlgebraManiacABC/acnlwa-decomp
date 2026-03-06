/**
 * FUN_007d5c40.c
 * Source line: 1181048
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007d5c40(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(param_2 + 0x14);
  FUN_003cf2fc(param_1,&local_18,4);
  piVar2 = *(int **)(param_2 + 0x10);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    FUN_003841b0(param_1,piVar1 + 2);
  }
  return;
}
