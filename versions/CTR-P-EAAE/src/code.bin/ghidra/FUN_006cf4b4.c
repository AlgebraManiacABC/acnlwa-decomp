/**
 * FUN_006cf4b4.c
 * Source line: 1030239
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_006cf4b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_10 [4];
  short local_c;
  char local_9;
  
  FUN_005cf3bc(auStack_10,param_1,param_2,param_3);
  return (local_c == 0x9c || local_c == 0xa6) ||
         (local_9 == '\f' || (local_9 == '\t' || (local_9 == '\n' || local_9 == '\b')));
}
