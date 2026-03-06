/**
 * FUN_00431c5c.c
 * Source line: 597825
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_00431c5c(int param_1,int *param_2)

{
  if ((*(int *)(param_1 + 0x5c) == *param_2) && (*(int *)(param_1 + 0x60) == param_2[1])) {
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  }
  return 0;
}
