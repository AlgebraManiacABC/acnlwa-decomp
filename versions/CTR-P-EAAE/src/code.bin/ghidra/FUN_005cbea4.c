/**
 * FUN_005cbea4.c
 * Source line: 879397
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005cbea4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fcb34(param_2);
  if (iVar1 == 0x2a) {
    *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) | 0x20;
  }
  uVar2 = FUN_002ffad8(param_2);
  if (0xff < uVar2) {
    uVar2 = 0;
  }
  *(char *)(param_1 + 0x26f) = (char)uVar2;
  return;
}
