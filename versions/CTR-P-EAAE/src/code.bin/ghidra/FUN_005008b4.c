/**
 * FUN_005008b4.c
 * Source line: 746419
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005008b4(int param_1,int param_2)

{
  FUN_004ff300(param_1,0);
  FUN_004ff300(param_1,1);
  FUN_004ff300(param_1,2);
  FUN_004ff300(param_1,3);
  FUN_004ff300(param_1,4);
  *(char *)(param_1 + 0x2ec) = (char)param_2;
  if (param_2 == 0) {
    __rt_memcpy_w(param_1 + 0x30,param_1 + 0x204,0xe8);
  }
  else {
    __rt_memcpy_w(param_1 + 0x30,param_1 + 0x11c,0xe8);
  }
  FUN_004feb7c(param_1,0,1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
