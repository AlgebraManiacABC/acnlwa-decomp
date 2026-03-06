/**
 * FUN_00540500.c
 * Source line: 784733
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00540500(undefined4 param_1,int *param_2)

{
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0xcc) = param_1;
    return;
  }
  return;
}
