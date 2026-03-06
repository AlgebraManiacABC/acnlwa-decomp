/**
 * FUN_00324cf4.c
 * Source line: 426850
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00324cf4(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ee524();
  if (iVar1 == 1) {
    iVar1 = FUN_00521a18(param_1);
    if (iVar1 == 2) {
      (**(code **)(*param_1 + 0x4c))(param_1);
      FUN_004ee4b4(param_1 + 6);
      iVar1 = 2;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}
