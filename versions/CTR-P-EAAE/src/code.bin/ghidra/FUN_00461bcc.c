/**
 * FUN_00461bcc.c
 * Source line: 629020
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00461bcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00461970();
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}
