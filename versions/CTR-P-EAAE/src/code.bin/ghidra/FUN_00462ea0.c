/**
 * FUN_00462ea0.c
 * Source line: 630091
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00462ea0(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 * 4 + 0xaea638) = param_2;
  *(undefined4 *)(param_1 * 4 + 0xaea640) = param_3;
  FUN_00135748(0xaf5110);
  *(int *)(param_1 * 4 + 0xaf50f0) = param_2;
  *(undefined4 *)(param_1 * 4 + 0xaf50f8) = param_3;
  if (param_2 == 0) {
    FUN_004634a8(0xaea674,param_1,(int)*(char *)(param_1 + 0xaf510c));
  }
  else {
    FUN_004634a8(0xaea674,param_1,1);
  }
  FUN_001357ec(0xaf5110);
  return;
}
