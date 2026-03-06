/**
 * FUN_00636ba4.c
 * Source line: 951229
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00636ba4(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if (((_DAT_00aaf14c != 0) && ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x570e) << 0x19) < 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x102c), iVar1 != 0)) {
    pbVar2 = (byte *)(iVar1 + 0x1e);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}
