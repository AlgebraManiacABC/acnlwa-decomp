/**
 * FUN_0064904c.c
 * Source line: 958529
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0064904c(int param_1)

{
  uRam0094d94a = 0xffff;
  if (*(int *)(param_1 + 0xf0) != 0) {
    uRam0094d94a = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x9ac);
  }
  GET_DAT_0095bf74();
  return;
}
