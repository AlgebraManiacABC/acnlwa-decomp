/**
 * FUN_0073c0cc.c
 * Source line: 1095561
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0073c0cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (((*(byte *)((int)param_1 + 0xb6) & 0x10) == 0) || (*(char *)((int)param_1 + 0xb5) != '\0')) {
    param_2 = (**(code **)(*param_1 + 0x68))(param_1);
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != param_1 + 5) {
    do {
      if ((*(byte *)((int)piVar1 + 0xb3) & 1) != 0) {
        param_2 = FUN_0073c0cc(piVar1 + -1,param_2,param_3,param_4);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != param_1 + 5);
  }
  return param_2;
}
