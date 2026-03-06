/**
 * FUN_00578b74.c
 * Source line: 821943
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00578b74(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = iRam0095385c;
  if ((int)((uint)*(byte *)(param_1 + 0xb08) << 0x1b) < 0) {
    if (iRam0095385c != 0) {
      uVar2 = FUN_00305f44();
      if (uVar2 == *(byte *)(iVar1 + 0x12)) {
        FUN_002f93bc(*(undefined1 *)(param_1 + 0x95e));
        return 1;
      }
    }
  }
  return 0;
}
