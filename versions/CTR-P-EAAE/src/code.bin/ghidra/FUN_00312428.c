/**
 * FUN_00312428.c
 * Source line: 415416
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00312428(int param_1)

{
  uint uVar1;
  
  if (((int)((uint)*(byte *)(param_1 + 0x5700) << 0x1b) < 0) &&
     (-1 < (int)((uint)*(byte *)(param_1 + 0x570e) << 0x1c))) {
    uVar1 = (uint)(*(byte *)(param_1 + 0x571a) >> 1) + (*(byte *)(param_1 + 0x571b) & 7) * 0x80 + 1;
    if (*(char *)(param_1 + 0x5719) < '\0') {
      if (100 < uVar1) {
        uVar1 = 100;
      }
      *(byte *)(param_1 + 0x571a) = *(byte *)(param_1 + 0x571a) & 1 | (byte)(uVar1 << 1);
      *(byte *)(param_1 + 0x571b) =
           *(byte *)(param_1 + 0x571b) & 0xf8 | (byte)((uVar1 & 0x380) >> 7);
      return 1;
    }
  }
  return 0;
}
