/**
 * FUN_00323ed0.c
 * Source line: 426170
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00323ed0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 auStack_14 [2];
  
  FUN_003171b4(&local_18,auStack_14,param_1 + 0x6c);
  iVar1 = FUN_00323dd4(param_1,local_18,auStack_14[0]);
  if ((iVar1 != 4) &&
     ((iVar2 = (**(code **)(param_1 + 0x1d0))
                         (*(undefined4 *)(param_1 + 0x70),local_18,auStack_14[0]), iVar1 != 1 ||
      (iVar2 == 1)))) {
    return 0;
  }
  return 1;
}
