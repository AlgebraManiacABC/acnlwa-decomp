/**
 * FUN_004eea38.c
 * Source line: 736675
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_004eea38(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0xd8) = *param_2;
  *(undefined4 *)(iVar1 + 0xdc) = uVar2;
  *(undefined4 *)(iVar1 + 0xe0) = uVar3;
  return 1;
}
