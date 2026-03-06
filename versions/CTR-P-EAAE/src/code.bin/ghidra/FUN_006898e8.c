/**
 * FUN_006898e8.c
 * Source line: 991413
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006898e8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x171);
  if ((bVar1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x171) = bVar1 & 0xfe;
  FUN_0067bc50(param_1);
  FUN_006740d8(param_1);
  return;
}
