/**
 * FUN_004126dc.c
 * Source line: 578945
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004126dc(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x30) == 0 && *(int *)(param_1 + 0x34) == 0) ||
     (*(char *)(param_1 + 0x2a) != '\0')) {
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0xc);
  }
  return;
}
