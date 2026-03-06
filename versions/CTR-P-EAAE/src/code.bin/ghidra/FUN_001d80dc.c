/**
 * FUN_001d80dc.c
 * Source line: 240824
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001d80dc(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00136e58();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00136e58(*(int *)(param_1 + 0x30),param_2);
    return;
  }
  return;
}
