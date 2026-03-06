/**
 * FUN_00308380.c
 * Source line: 406407
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00308380(astruct_7 *param_1,undefined2 *param_2,undefined1 *param_3,astruct_7 *param_4)

{
  astruct_7_Copy(param_1,param_4);
  astruct_7_Copy(param_1 + 1,param_4);
  *(undefined2 *)&param_1[2].field0_0x0 = *param_2;
  *(undefined1 *)((int)&param_1[2].field0_0x0 + 2) = *param_3;
  return;
}
