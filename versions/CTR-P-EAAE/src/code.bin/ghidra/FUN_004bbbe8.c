/**
 * FUN_004bbbe8.c
 * Source line: 698644
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004bbbe8(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = (uint)*(byte *)(param_1 + 0xfc) % 3 != param_2;
  *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) | bVar1;
  if (bVar1) {
    *(char *)(param_1 + 0xfc) =
         (char)param_2 +
         (char)((uint)((short)(ushort)*(byte *)(param_1 + 0xfc) * 0xab) >> 9) * '\x03';
  }
  return;
}
