/**
 * FUN_00712610.c
 * Source line: 1067782
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00712610(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = **(undefined4 **)(param_1 + 0x364);
  uVar2 = (*(undefined4 **)(param_1 + 0x364))[1];
  *param_2 = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return 1;
}
