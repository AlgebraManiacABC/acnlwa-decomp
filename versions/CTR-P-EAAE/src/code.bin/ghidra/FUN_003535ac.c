/**
 * FUN_003535ac.c
 * Source line: 454824
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003535ac(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  cVar1 = (char)param_1[6];
  if (cVar1 == '\0') {
    FUN_00483a08(param_2,param_3,param_4,param_5,(int)*param_1,(int)param_1[3]);
    return;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      FUN_00483aec(param_2,param_3,param_4,param_5,(int)param_1[2],(int)param_1[5]);
    }
    return;
  }
  FUN_00483904(param_2,param_3,param_4,param_5,(int)param_1[1],(int)param_1[4]);
  return;
}
