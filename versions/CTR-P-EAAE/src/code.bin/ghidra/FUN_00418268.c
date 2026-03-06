/**
 * FUN_00418268.c
 * Source line: 583104
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00418268(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x1238) = *(uint *)(param_1 + 0x123c);
  software_interrupt(GetSystemTick);
  *(int *)(param_1 + 0x123c) =
       (int)((ulonglong)*(uint *)(param_1 + 0x123c) * 0xf46f6f >> 0x20) + param_2 * 0xf46f6f;
  return;
}
