/**
 * FUN_0054e630.c
 * Source line: 793239
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined2 * FUN_0054e630(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_009753c0;
  uVar1 = FUN_0055cb58(_DAT_009753c0);
  *param_1 = uVar1;
  uVar1 = FUN_0055cb58(uVar2);
  param_1[1] = uVar1;
  uVar2 = FUN_0055cb58(uVar2);
  *(undefined4 *)(param_1 + 2) = uVar2;
  return param_1;
}
