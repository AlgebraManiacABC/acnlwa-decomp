/**
 * FUN_0075db08.c
 * Source line: 1118122
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0075db08(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_00308efc(&uStack_14);
  return *(undefined4 *)
          ((uint)*(byte *)((uStack_10 >> 0x10 & 0xff) + param_1 + 0x17) * 4 + 0x95bf84);
}
