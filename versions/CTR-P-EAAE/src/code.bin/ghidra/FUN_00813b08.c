/**
 * FUN_00813b08.c
 * Source line: 1222117
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined1 * FUN_00813b08(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    __aeabi_memset(param_1,1,0xff);
  }
  return param_1;
}
