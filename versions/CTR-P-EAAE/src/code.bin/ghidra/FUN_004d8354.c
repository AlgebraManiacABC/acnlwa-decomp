/**
 * FUN_004d8354.c
 * Source line: 720166
 * Body lines: 15
 */
#include "../../../include/types.h"

int * FUN_004d8354(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = (int)(param_1 + param_2 * 0xb + 10);
  param_1[5] = (int)(param_1 + param_2 * 0xb + 10) + (param_2 + 7U >> 3) + 0xf & 0xfffffff0;
  iVar1 = FUN_004d8340();
  param_1[8] = iVar1;
  param_1[4] = param_1[5];
  return param_1;
}
