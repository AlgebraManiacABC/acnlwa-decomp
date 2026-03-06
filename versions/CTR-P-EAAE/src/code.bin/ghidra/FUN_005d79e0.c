/**
 * FUN_005d79e0.c
 * Source line: 885828
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005d79e0(float param_1)

{
  int iVar1;
  undefined4 local_8;
  
  uRam0095df24 = (undefined2)(int)(param_1 * 32.0);
  local_8 = 0x95df1c;
  if (((uRam0095def4 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95def4), iVar1 != 0)) {
    FUN_005d7a8c(0xad5718,&local_8);
  }
  return 0xad5718;
}
