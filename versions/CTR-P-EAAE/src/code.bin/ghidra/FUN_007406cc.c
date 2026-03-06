/**
 * FUN_007406cc.c
 * Source line: 1098859
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_007406cc(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x14 + 4);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  uVar2 = FUN_00740698();
  param_2[2] = uVar2;
  return 1;
}
