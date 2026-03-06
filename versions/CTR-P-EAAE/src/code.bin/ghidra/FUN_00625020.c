/**
 * FUN_00625020.c
 * Source line: 938707
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00625020(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == NULL) {
    return;
  }
  if (*param_1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x43806,4);
    *param_1 = iVar1;
  }
  return;
}
