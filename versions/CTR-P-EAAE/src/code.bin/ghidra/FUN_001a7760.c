/**
 * FUN_001a7760.c
 * Source line: 213545
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001a7760(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00757aa0();
  iVar1 *= 3;
  *(undefined1 *)(*param_1 + iVar1) = param_6;
  *(undefined1 *)(*param_1 + iVar1 + 1) = param_5;
  *(undefined1 *)(*param_1 + iVar1 + 2) = param_4;
  return;
}
