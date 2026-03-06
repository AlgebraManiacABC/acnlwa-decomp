/**
 * FUN_001eae60.c
 * Source line: 251822
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001eae60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (((param_1[100] == 8) && (param_1[0x67] <= param_1[0x66])) &&
     (uStack_10 = param_4, iVar1 = FUN_0027d394(param_1), iVar1 != 0)) {
    (**(code **)(*param_1 + 0xa4))(&uStack_10,param_1);
    FUN_006d9cac(&uStack_10,param_1 + 5);
    iVar1 = FUN_0027d394(param_1);
    if (iVar1 != 0) {
      FUN_007c7834(param_1 + 99,0xb);
    }
    return 1;
  }
  return 0;
}
