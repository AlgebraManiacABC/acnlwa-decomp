/**
 * FUN_0064c130.c
 * Source line: 959068
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0064c130(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (((_DAT_00aaf14c != 0) && ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x570e) << 0x19) < 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xf0) + 0x102c), iVar2 != 0)) {
    pbVar3 = (byte *)(iVar2 + 0x1e);
    *pbVar3 = *pbVar3 | 0x10;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xf0) + 0x102c);
  if ((iVar2 != 0) && (uVar1 = FUN_00318944(iVar2 + 0x28), 1 < uVar1)) {
    FUN_0051ddb8(iVar2 + 0x28,0,0);
    return;
  }
  return;
}
