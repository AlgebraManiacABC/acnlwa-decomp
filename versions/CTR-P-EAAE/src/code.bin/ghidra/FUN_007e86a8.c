/**
 * FUN_007e86a8.c
 * Source line: 1190750
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_007e86a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_80 [44];
  undefined4 local_54;
  undefined4 uStack_50;
  
  __rt_memcpy_w(auStack_80,param_1,100);
  FUN_007e8704(auStack_80,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2c) = local_54;
  *(undefined4 *)(param_1 + 0x30) = uStack_50;
  return auStack_80;
}
