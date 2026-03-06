/**
 * FUN_003329f0.c
 * Source line: 434980
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003329f0(byte *param_1)

{
  byte *pbVar1;
  
  *param_1 = *DAT_0095386c & 3;
  param_1[1] = (byte)(((uint)*DAT_0095386c << 0x1a) >> 0x1c);
  param_1[2] = (DAT_0095386c[1] & 3) * '\x02' - ((char)*DAT_0095386c >> 7);
  param_1[3] = (byte)(((uint)DAT_0095386c[1] << 0x1c) >> 0x1e);
  pbVar1 = DAT_0095386c;
  param_1[4] = (byte)(((uint)DAT_0095386c[1] << 0x19) >> 0x1d);
  *(ushort *)(param_1 + 6) =
       (ushort)(pbVar1[1] >> 7) + (ushort)pbVar1[2] * 2 + (ushort)pbVar1[3] * 0x200;
  return;
}
