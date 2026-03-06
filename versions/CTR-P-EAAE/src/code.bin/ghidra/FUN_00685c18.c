/**
 * FUN_00685c18.c
 * Source line: 989391
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00685c18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x10000000,uVar1);
    if ((iVar2 != 0) && (-1 < (int)((uint)*(byte *)(param_1 + 0x176) << 0x1c))) {
      FUN_0068f290();
      *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) | 8;
    }
  }
  return;
}
