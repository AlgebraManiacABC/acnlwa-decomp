/**
 * FUN_007406a4.c
 * Source line: 1098847
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_007406a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0073ef1c(*(undefined4 *)(param_1 + 4));
  __rt_memcpy_w(param_2,uVar1,0x4c);
  return 1;
}
