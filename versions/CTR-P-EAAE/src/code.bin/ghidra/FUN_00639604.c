/**
 * FUN_00639604.c
 * Source line: 952147
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00639604(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x94];
  if (piVar1 != param_1 && piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
    return;
  }
  GET_DAT_0095bf74();
  return;
}
