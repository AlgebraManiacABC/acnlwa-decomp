/**
 * FUN_005ecff0.c
 * Source line: 901366
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005ecff0(int param_1,int param_2,int param_3)

{
  undefined1 auStack_28 [28];
  
  param_1 += param_3 * 0x44;
  if (param_2 < 0) {
    param_2 = 0;
  }
  FUN_005f723c(auStack_28);
  FUN_005f6eb0(auStack_28,param_1 + 0x448,param_2,4,0,4);
  *(int *)(param_1 + 0x488) = param_2;
  *(undefined1 *)(param_1 + 0x486) = 1;
  return;
}
