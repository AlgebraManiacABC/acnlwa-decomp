/**
 * FUN_0073fd30.c
 * Source line: 1098248
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0073fd30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_120 [272];
  
  (**(code **)(*(int *)*param_1 + 0x40))
            ((int *)*param_1,(uint)*(ushort *)(param_1 + 3) * param_3 + param_1[2],0);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,auStack_120,0x100);
  if (iVar1 == 0x100) {
    __rt_memcpy_w(param_2,auStack_120,0x100);
  }
  return iVar1 == 0x100;
}
