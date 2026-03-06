/**
 * FUN_00585784.c
 * Source line: 831839
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00585784(int *param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)param_1 + 5) == '\x01';
  if (bVar1) {
    *(undefined1 *)((int)param_1 + 5) = 0;
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return bVar1;
}
