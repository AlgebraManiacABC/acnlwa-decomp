/**
 * FUN_00462d14.c
 * Source line: 629958
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00462d14(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00135748(param_1 + 0x34);
  *(char *)(param_1 + param_2 + 0x30) = (char)param_3;
  if ((param_3 == 0) && (*(int *)(param_1 + param_2 * 4 + 0x14) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_004634a8(0xaea674,param_2,uVar1);
  FUN_001357ec(param_1 + 0x34);
  return;
}
