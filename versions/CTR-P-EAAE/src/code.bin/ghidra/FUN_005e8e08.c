/**
 * FUN_005e8e08.c
 * Source line: 898039
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005e8e08(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (((puVar1 == NULL) || (puVar1[5] != param_2[5])) ||
     (iVar2 = FUN_00100d2c((uint *)*puVar1,(uint *)*param_2,puVar1[5]), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}
