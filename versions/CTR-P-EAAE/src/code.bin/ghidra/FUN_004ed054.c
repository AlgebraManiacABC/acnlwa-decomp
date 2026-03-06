/**
 * FUN_004ed054.c
 * Source line: 734401
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004ed054(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  local_10 = param_2[2];
  FUN_0056a378(&local_18);
  iVar1 = *(int *)(param_1 + 0x118);
  *(undefined4 *)(iVar1 + 0x17c) = local_18;
  *(undefined4 *)(iVar1 + 0x180) = uStack_14;
  *(undefined4 *)(iVar1 + 0x184) = local_10;
  return 1;
}
