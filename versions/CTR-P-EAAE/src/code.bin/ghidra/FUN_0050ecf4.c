/**
 * FUN_0050ecf4.c
 * Source line: 752921
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0050ecf4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004267b0();
  if (iVar1 != 0) {
    FUN_00135740((int)(param_1 + 0xa4));
    if (iRam00974a18 != 0) {
      FUN_00429654();
    }
    FUN_00428ea0();
    FUN_00137e84(param_1 + 0xa4);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(int *)*param_1 + 0x1c))();
    param_1[1] = 0;
  }
  return;
}
