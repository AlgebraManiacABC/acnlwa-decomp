/**
 * FUN_002c4680.c
 * Source line: 363995
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_002c4680(int param_1)

{
  *(byte *)(param_1 + 0xe1) = (byte)*(undefined4 *)(param_1 + 8) >> 4;
  if (uRam0094d774 == 0xffffffff) {
    uRam0094d774 = (uint)(*(int *)(param_1 + 8) << 0x1c) >> 0x1d;
  }
  bRam0094d76c = (byte)*(undefined4 *)(param_1 + 8) & 1;
  FUN_006e477c(param_1,*(undefined4 *)(param_1 + 8));
  return 2;
}
