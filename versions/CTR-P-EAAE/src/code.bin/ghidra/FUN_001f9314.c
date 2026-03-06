/**
 * FUN_001f9314.c
 * Source line: 258645
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001f9314(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_40 [48];
  
  if ((*(int *)(param_1 + 0x1d0) == 0) ||
     (*(int *)(param_1 + 0x1d4) != *(int *)(*(int *)(param_1 + 0x1d0) + 0xc))) {
    FUN_00711db0(param_1,auStack_40,param_3,0);
    FUN_00207740(param_1 + 0x1c4,param_2,auStack_40,0);
    *(undefined4 *)(param_1 + 0x1e0) = param_3;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
  }
  return;
}
