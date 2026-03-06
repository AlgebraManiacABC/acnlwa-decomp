/**
 * FUN_0073acb8.c
 * Source line: 1094269
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0073acb8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0077a420(*(undefined4 *)(param_2 + 0x30));
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  uVar1 = FUN_0077a420(*(undefined4 *)(param_2 + 0x34));
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  uVar1 = FUN_0077a420(*(undefined4 *)(param_2 + 0x38));
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 0x800;
  return 1;
}
