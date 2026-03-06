/**
 * FUN_00740114.c
 * Source line: 1098501
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00740114(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0073f208(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != NULL) {
    *param_3 = *puVar1;
    uVar2 = FUN_0073f1ac();
    param_3[1] = uVar2;
  }
  return puVar1 != NULL;
}
