/**
 * FUN_00288958.c
 * Source line: 330909
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00288958(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007237e0();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xbfc) = *(uint *)(param_1 + 0xbfc) & 0xfffffff7;
    FUN_002f6e14(param_1 + 0xb28);
    *(undefined4 *)(param_1 + 0x2d5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2d60) = 0xffffffff;
    FUN_00818104(param_1 + 0x28,FUN_002889bc,0);
  }
  return;
}
