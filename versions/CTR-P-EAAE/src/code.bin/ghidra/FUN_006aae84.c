/**
 * FUN_006aae84.c
 * Source line: 1006362
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined1 * FUN_006aae84(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_880 [2160];
  
  FUN_001b490c(auStack_880,param_1);
  __rt_memcpy_w(param_1,param_2,0x870);
  __rt_memcpy_w(param_2,auStack_880,0x870);
  FUN_006ab0b0(param_1);
  FUN_006ab0b0(param_2);
  return auStack_880;
}
