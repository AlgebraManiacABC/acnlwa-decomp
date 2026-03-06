/**
 * FUN_003d9588.c
 * Source line: 550035
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_003d9588(int param_1,int param_2)

{
  undefined4 local_10;
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_10 = 0;
  if ((*(char *)(param_1 + 0x3b) == '\0') &&
     (FUN_007d28e8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0')) {
    FUN_007d2948(param_1,&local_10);
  }
  return;
}
