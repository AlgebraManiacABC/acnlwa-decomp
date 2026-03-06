/**
 * FUN_001f4ae4.c
 * Source line: 256506
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_001f4ae4(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x2a] != '\0') {
    (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) + 0x18))
              (*(int *)(*param_1 + -0xc) + (int)param_1);
  }
  if (0.0 < (float)param_1[0x23]) {
    uVar1 = (**(code **)(*param_1 + 0x84))(param_1);
    FUN_006ef39c(param_1[0x23],param_1[0x24],uVar1,param_1[0x25],param_1 + 0x15,
                 (int)*(short *)((int)param_1 + 0x8a),0,0,(int)(short)param_1[0x26]);
  }
  return 2;
}
