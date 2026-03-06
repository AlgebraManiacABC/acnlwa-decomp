/**
 * FUN_003013c0.c
 * Source line: 398847
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003013c0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  __rt_memclr(param_1 + 9,0x182);
  iVar1 = FUN_00301e94((int)param_1 + 0x1a6);
  *(undefined2 *)(iVar1 + 4) = 0;
  return;
}
