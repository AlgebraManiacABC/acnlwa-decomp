/**
 * FUN_001b3300.c
 * Source line: 220207
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined1 * FUN_001b3300(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_18 [12];
  
  if (param_2 == 0) {
    return param_1;
  }
  FUN_001c4c14(auStack_18);
  FUN_001b3340(param_1,auStack_18,param_3);
  return auStack_18;
}
