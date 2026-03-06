/**
 * FUN_00460710.c
 * Source line: 628145
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00460710(int param_1)

{
  int iVar1;
  
  FUN_00135748(0xaea668);
  iVar1 = param_1 * 8;
  if (*(int *)(iVar1 + 0xaea658) != 0) {
    FUN_00464ff4();
  }
  if (*(int *)(iVar1 + 0xaea65c) != 0) {
    FUN_0046598c();
  }
  *(undefined4 *)(iVar1 + 0xaea658) = 0;
  *(undefined4 *)(iVar1 + 0xaea65c) = 0;
  FUN_00462d14(0xaf50dc,param_1,0);
  FUN_001357ec(0xaea668);
  return;
}
