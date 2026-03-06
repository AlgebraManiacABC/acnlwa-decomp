/**
 * FUN_00183f8c.c
 * Source line: 199418
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00183f8c(undefined4 param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  uint auStack_1c0 [107];
  
  FUN_003013c0(auStack_1c0);
  uVar1 = __rt_memcpy(auStack_1c0,param_2,param_3);
  FUN_002fae84((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}
