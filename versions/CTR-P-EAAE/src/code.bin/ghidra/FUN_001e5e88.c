/**
 * FUN_001e5e88.c
 * Source line: 248405
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001e5e88(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00300650(&local_14);
  local_20 = local_14;
  uStack_1c = uStack_10;
  uStack_18 = uStack_c;
  iVar1 = FUN_0056bc28(&local_20);
  return *(undefined4 *)(iVar1 * 0x28 + 0x95213c + param_1 * 4);
}
