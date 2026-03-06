/**
 * FUN_003d0c60.c
 * Source line: 542600
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_003d0c60(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &UNK_008fe9d0;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    iVar1 = strlen(param_2);
    iVar1 += 1;
    piVar2 = (int *)FUN_003619b0(iVar1 * 2 + 4);
    *piVar2 = iVar1;
    param_1[1] = piVar2 + 1;
    FUN_00528924(param_2,piVar2 + 1,iVar1);
  }
  return param_1;
}
