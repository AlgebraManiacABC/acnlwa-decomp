/**
 * FUN_005aa914.c
 * Source line: 857248
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_005aa914(int *param_1)

{
  undefined1 auStack_68 [92];
  
  FUN_005ac5dc(auStack_68,0x2c,(char)param_1[0xd],param_1[0xe],(int)(char)param_1[0xf]);
  (**(code **)(*param_1 + 0xc))
            (param_1,(char)param_1[0xd],auStack_68,*(code **)(*param_1 + 0xc),0,0,0);
  return (int)(char)param_1[10];
}
