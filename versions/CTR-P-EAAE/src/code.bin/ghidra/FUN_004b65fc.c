/**
 * FUN_004b65fc.c
 * Source line: 694672
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_004b65fc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b4d90(param_1 + 9);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2), iVar1 != 0)) {
    FUN_004b4c78(param_1 + 9,param_2,iVar1,1);
  }
  return iVar1;
}
