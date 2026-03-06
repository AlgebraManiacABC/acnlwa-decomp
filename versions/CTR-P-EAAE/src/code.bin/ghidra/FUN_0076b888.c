/**
 * FUN_0076b888.c
 * Source line: 1128992
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_0076b888(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007684a4();
  if ((iVar1 != 0) && (iVar1 = FUN_004e0f14(param_1), iVar1 != 0)) {
    return ((uint)*(byte *)(iVar1 + 0x20) << 0x1c) >> 0x1f;
  }
  return 0;
}
