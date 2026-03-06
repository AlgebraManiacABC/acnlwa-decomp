/**
 * FUN_00354384.c
 * Source line: 455511
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00354384(int *param_1)

{
  undefined4 uVar1;
  
  if (cRam00974f31 == '\0') {
    uVar1 = 0xd8208ff8;
  }
  else {
    *param_1 = *(int *)(iRam00ae0f20 + iRam00974f34) + iRam00ae0f20;
    uVar1 = 0;
  }
  return uVar1;
}
