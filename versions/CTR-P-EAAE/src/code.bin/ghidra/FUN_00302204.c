/**
 * FUN_00302204.c
 * Source line: 399720
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00302204(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  while( true ) {
    iVar3 = param_1 + uVar2 * 0xa480;
    iVar1 = FUN_002fbd54(iVar3 + 0x55a6);
    if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar3 + 0x5700) << 0x1b) < 0)) break;
    uVar2 += 1;
    if (3 < (int)uVar2) {
      return 4;
    }
  }
  return uVar2 & 0xff;
}
