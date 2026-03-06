/**
 * FUN_00577410.c
 * Source line: 820764
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00577410(int param_1,undefined1 param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x7a2) = param_2;
    *(undefined1 *)(param_1 + 0x7a3) = param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x7a3) = param_2;
  }
  return;
}
