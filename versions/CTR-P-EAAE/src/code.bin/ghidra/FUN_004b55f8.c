/**
 * FUN_004b55f8.c
 * Source line: 693985
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004b55f8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = FUN_004d8af0(param_1 + 2);
  iVar1 = FUN_007e8be8(iVar1 + 0xf0);
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined1 *)(iVar1 + 0x1e8) = 0;
  return;
}
