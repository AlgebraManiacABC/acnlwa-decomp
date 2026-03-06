/**
 * FUN_00676b2c.c
 * Source line: 982063
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00676b2c(int param_1)

{
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) && ((DAT_00aadad4 & 1) != 0)) {
    DAT_00aadad4 &= 0xfe;
  }
  else {
    FUN_0068db1c(0,0x3f800000,0,0,0,param_1,0xbb,1,0,1);
  }
  return;
}
