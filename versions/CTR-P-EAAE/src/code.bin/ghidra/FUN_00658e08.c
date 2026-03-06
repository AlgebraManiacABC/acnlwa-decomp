/**
 * FUN_00658e08.c
 * Source line: 966808
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00658e08(int param_1)

{
  undefined1 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0064f368(param_1);
  }
  FUN_002e6368(param_1 + 0x1348);
  FUN_002e6368(param_1 + 0x136c);
  FUN_002e6368(param_1 + 0x1390);
  *(undefined2 *)(param_1 + 0x1f0) = 0;
  FUN_0065393c(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x1ac);
  FUN_006576f8(uVar1);
  FUN_0065e058(uVar1);
  FUN_0067bc50(param_1);
  *(byte *)(param_1 + 0x175) = *(byte *)(param_1 + 0x175) & 0xdf;
  return;
}
