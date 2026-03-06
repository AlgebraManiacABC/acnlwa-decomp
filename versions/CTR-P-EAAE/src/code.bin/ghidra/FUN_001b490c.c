/**
 * FUN_001b490c.c
 * Source line: 221100
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_001b490c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  __rt_memcpy_w(param_1,param_2,0x870);
  *(undefined1 *)(param_1 + 0x86c) = 0;
  iVar1 = FUN_002fc900();
  if (((iVar1 != 0) && (iVar1 = FUN_00305f44(), iVar1 != 0)) &&
     (iVar1 = FUN_006aac60(param_1), (uint)(iVar1 << 0x14) >> 0x1c == 0)) {
    *(undefined1 *)(param_1 + 0x86c) = 1;
  }
  FUN_001b2c7c(param_1);
  *(undefined2 *)(param_1 + 0x28) = 0;
  return param_1;
}
