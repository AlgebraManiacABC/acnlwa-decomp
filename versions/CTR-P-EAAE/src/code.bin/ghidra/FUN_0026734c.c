/**
 * FUN_0026734c.c
 * Source line: 312998
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0026734c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0xd30) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0xd30) + 0xb7) & 0xfe | 1;
  FUN_004b9b64(param_1 + 0xa70,*(undefined4 *)(param_1 + 0xd24));
  (**(code **)(**(int **)(param_1 + 0xd24) + 8))(0);
  FUN_00267188(param_1);
  return;
}
