/**
 * FUN_004baac8.c
 * Source line: 697861
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004baac8(int param_1,undefined4 param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  (**(code **)(**(int **)(param_1 + 0x164) + 0x28))(*(int **)(param_1 + 0x164),param_2,param_5,1);
  local_20 = (((*(float *)(param_1 + 0x48) - *param_4) + *(float *)(param_1 + 0x138)) - param_4[1])
             + *(float *)(param_1 + 0x13c);
  local_1c = (((*(float *)(param_1 + 0x4c) - param_4[2]) + *(float *)(param_1 + 0x140)) - param_4[3]
             ) + *(float *)(param_1 + 0x144);
  local_28 = (*param_3 + *param_4) - *(float *)(param_1 + 0x138);
  local_24 = (param_3[1] - param_4[2]) + *(float *)(param_1 + 0x140);
  FUN_004bed0c(param_2,&local_28,&local_20,*(undefined1 *)(param_1 + 0x159),
               *(undefined4 *)(param_1 + 0x15c),param_1 + 0x148);
  return;
}
