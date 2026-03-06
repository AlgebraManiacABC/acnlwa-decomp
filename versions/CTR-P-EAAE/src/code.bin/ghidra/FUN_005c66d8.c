/**
 * FUN_005c66d8.c
 * Source line: 875518
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c66d8(void)

{
  int iVar1;
  int iVar2;
  undefined2 local_c [2];
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    local_c[0] = 0;
    iVar2 = FUN_00678278(0,iVar1,0x1c,5,local_c,0,0,0xffffffff);
    if (iVar2 != 0) {
      FUN_00664e50(iVar1);
      return 1;
    }
  }
  return 0;
}
