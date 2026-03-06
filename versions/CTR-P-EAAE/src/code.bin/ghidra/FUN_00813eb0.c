/**
 * FUN_00813eb0.c
 * Source line: 1222378
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 * FUN_00813eb0(undefined2 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    FUN_0077961c(param_1,0xff);
  }
  return param_1;
}
