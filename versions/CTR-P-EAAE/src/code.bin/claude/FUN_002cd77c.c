/**
 * FUN_002cd77c.c
 * Source line: 368115
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_002cd77c(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_00304640(param_1 + 8);
    }
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  return 1;
}
