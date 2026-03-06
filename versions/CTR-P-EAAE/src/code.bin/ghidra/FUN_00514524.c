/**
 * FUN_00514524.c
 * Source line: 756656
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00514524(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_80 [108];
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  FUN_00400fd8(auStack_80);
  local_14 = param_2;
  uVar1 = FUN_00514264(param_1,auStack_80);
  FUN_004394b8(auStack_80);
  return uVar1;
}
