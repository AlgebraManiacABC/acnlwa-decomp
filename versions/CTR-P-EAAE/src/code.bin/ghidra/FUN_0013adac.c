/**
 * FUN_0013adac.c
 * Source line: 147602
 * Body lines: 11
 */
#include "../../../include/types.h"

int * FUN_0013adac(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (((param_2 != NULL) && (*param_2 == 0x4b4e4243)) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    iVar1 = FUN_0013c850();
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return param_1;
}
