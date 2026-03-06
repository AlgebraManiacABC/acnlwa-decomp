/**
 * FUN_004ee9a8.c
 * Source line: 736624
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004ee9a8(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  *(undefined4 *)(iVar1 + 0x40) = param_1;
  return;
}
