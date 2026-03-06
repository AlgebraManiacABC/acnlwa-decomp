/**
 * FUN_0076d994.c
 * Source line: 1130889
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0076d994(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fcb34(param_2);
  if ((iVar1 == 0x2c) && (uVar2 = FUN_002ffad8(param_2), (int)uVar2 < 0x43)) {
    if ((uint)((int)uVar2 >> 3) < 9) {
      return ((uint)*(byte *)(((int)uVar2 >> 3) + param_1 + 0x8f6e) & 1 << (uVar2 & 7)) != 0;
    }
  }
  return false;
}
