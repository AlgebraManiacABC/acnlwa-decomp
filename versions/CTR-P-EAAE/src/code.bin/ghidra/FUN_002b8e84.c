/**
 * FUN_002b8e84.c
 * Source line: 355578
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002b8e84(int param_1,undefined4 param_2)

{
  undefined1 auStack_54 [72];
  
  *(byte *)(*(int *)(param_1 + 0x298) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x298) + 0xb7) & 0xfe | 1;
  FUN_00312bd0(auStack_54);
  FUN_00312c4c(auStack_54,param_2,2,10,4);
  FUN_005e2e50(param_1 + 0x2a4,auStack_54);
  FUN_005e2f94(param_1 + 0x2a4);
  FUN_00312cb0(auStack_54);
  return;
}
