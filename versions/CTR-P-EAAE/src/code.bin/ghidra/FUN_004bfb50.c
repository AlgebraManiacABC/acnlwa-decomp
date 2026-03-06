/**
 * FUN_004bfb50.c
 * Source line: 701853
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_004bfb50(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x7f;
  param_1[7] = 0x40;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  __aeabi_memset(param_1 + 0xb,2,0xffffffff);
  *(undefined2 *)(param_1 + 5) = 0;
  return param_1;
}
