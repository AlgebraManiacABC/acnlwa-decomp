/**
 * FUN_00549c78.c
 * Source line: 790580
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00549c78(float param_1,float param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 local_28;
  float local_24;
  
  (**(code **)(*param_3 + 0x28))(param_3,param_4,param_5,0xaf3eac,0xaf3eac,0);
  local_24 = (float)param_5[1] * (param_2 - param_1);
  local_28 = *param_5;
  local_38 = *param_4;
  local_34 = (float)param_4[1] - (float)param_5[1] * param_1;
  uStack_30 = 0;
  (**(code **)(*param_3 + 0x28))(param_3,&local_38,&local_28,&DAT_00ae533c,&DAT_00ae533c,0);
  return;
}
