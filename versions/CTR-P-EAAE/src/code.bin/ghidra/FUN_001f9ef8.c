/**
 * FUN_001f9ef8.c
 * Source line: 259058
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001f9ef8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x438) != '\0') {
    FUN_00569420(param_1 + 0x38,param_1 + 0x41c);
  }
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  uVar1 = FUN_004b4fc0(param_1 + 0x38,"A00_cursol",1);
  FUN_00568630(param_1 + 0x38,param_1 + 0x444,uVar1,0);
  FUN_005697e0(0,param_1 + 0x444);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
