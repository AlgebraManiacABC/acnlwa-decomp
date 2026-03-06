/**
 * FUN_004ee904.c
 * Source line: 736573
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004ee904(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    pcVar2 = (code *)&UNK_004d4b94;
  }
  else {
    if (param_2 != 1) goto LAB_004ee948;
    iVar1 = (**(code **)(*param_1 + 8))();
    pcVar2 = FUN_004d4b08;
  }
  *(code **)(iVar1 + 0x4c) = pcVar2;
LAB_004ee948:
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}
