/**
 * FUN_002ffc18.c
 * Source line: 397959
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_002ffc18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_10 [6];
  char local_a;
  char local_9;
  
  FUN_005cf3bc(auStack_10,param_1,param_2,param_3);
  return (local_a == '(' || local_a == '$') ||
         (local_9 == '\r' || (local_9 == '\f' || local_9 == '\v'));
}
