/**
 * FUN_002c2a64.c
 * Source line: 362802
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_002c2a64(int *param_1)

{
  undefined1 uVar1;
  
  if ((*param_1 != 0) && (*(char *)(*param_1 + 0xf) == '\0')) {
    uVar1 = FUN_006d926c(1,*(undefined1 *)(*param_1 + 0x18c));
    return uVar1;
  }
  return 3;
}
