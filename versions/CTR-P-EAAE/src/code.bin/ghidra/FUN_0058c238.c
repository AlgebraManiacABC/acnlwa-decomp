/**
 * FUN_0058c238.c
 * Source line: 836311
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_0058c238(int *param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)param_1 + 5) == '\x01';
  if (bVar1) {
    *(undefined1 *)((int)param_1 + 5) = 0;
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return bVar1;
}
