/**
 * FUN_005da278.c
 * Source line: 886936
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005da278(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007559a0(param_3);
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 8) != NULL) {
    uVar1 = FUN_0056d060((astruct_1 *)**(undefined4 **)(param_1 + 8));
  }
  *param_2 = uVar1;
  return 1;
}
