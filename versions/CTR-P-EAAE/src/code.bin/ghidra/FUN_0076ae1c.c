/**
 * FUN_0076ae1c.c
 * Source line: 1128431
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_0076ae1c(ushort *param_1)

{
  ushort uVar1;
  
  if ((*param_1 & 0x7fff) == 0x2000) {
    uVar1 = param_1[1] & 0x3fff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
