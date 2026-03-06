/**
 * FUN_0030befc.c
 * Source line: 410145
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0030befc(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0xa83370;
  }
  else {
    if (param_1 != 1) {
      return 0xffffffff;
    }
    puVar1 = (undefined4 *)0xa83374;
  }
  return *puVar1;
}
