/**
 * FUN_0038fb80.c
 * Source line: 498101
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0038fb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 auStack_90 [104];
  undefined1 auStack_28 [16];
  
  FUN_00355f34(auStack_90);
  FUN_003551b4(auStack_90,param_2);
  FUN_00354f44(auStack_28,auStack_90,&UNK_00899dc2,param_3);
  FUN_00354f44(auStack_28,auStack_90,&UNK_00898a58,param_4);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0038d3a8(*(int *)(param_1 + 0x28),auStack_90,
                 *(int *)(param_5 + 0x18) + *(int *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10))
    ;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  FUN_00355ff8(auStack_90);
  return;
}
