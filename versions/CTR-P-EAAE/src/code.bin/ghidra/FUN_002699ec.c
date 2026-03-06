/**
 * FUN_002699ec.c
 * Source line: 314434
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002699ec(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined2 **)(param_1 + 2) = param_1 + 8;
  *(undefined2 **)(param_1 + 4) = param_1 + 8;
  *(undefined4 *)(param_1 + 6) = 3;
  iVar1 = FUN_00301d0c(param_1 + 0x1a,FUN_0026a3f0,0x2c,4);
  *(undefined1 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  *(undefined4 *)(iVar1 + 0xb8) = 3;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined2 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  return;
}
