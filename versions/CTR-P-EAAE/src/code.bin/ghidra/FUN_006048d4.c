/**
 * FUN_006048d4.c
 * Source line: 920395
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006048d4(int *param_1)

{
  uint local_1c;
  undefined1 auStack_18 [16];
  
  FUN_006a5f0c(auStack_18);
  local_1c &= 0xffff0000;
  (**(code **)(*param_1 + 0xb8))(param_1,0,auStack_18,local_1c);
  return;
}
