/**
 * FUN_0044e6f8.c
 * Source line: 614582
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0044e6f8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    uVar1 = 0xe0a14827;
  }
  else {
    FUN_00459d6c(*(int *)(param_1 + 0x10c));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return uVar1;
}
