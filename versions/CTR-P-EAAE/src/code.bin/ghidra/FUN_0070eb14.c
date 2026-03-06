/**
 * FUN_0070eb14.c
 * Source line: 1065997
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0070eb14(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x5e) {
    uVar1 = *(undefined4 *)(&UNK_0083a988 + param_2 * 0x14);
  }
  else {
    uVar1 = 0x1e5f;
  }
  return uVar1;
}
