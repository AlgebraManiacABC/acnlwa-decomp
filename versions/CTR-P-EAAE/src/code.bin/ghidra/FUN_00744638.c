/**
 * FUN_00744638.c
 * Source line: 1100783
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00744638(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = NULL;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (iVar1 == 1) {
    puVar2 = &UNK_004d8318;
  }
  *param_1 = 0;
  param_1[1] = puVar2;
  param_1[2] = 0;
  return;
}
