/**
 * FUN_004ee594.c
 * Source line: 736435
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_004ee594(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &UNK_0090298c;
  param_1[6] = 0;
  puVar1 = (undefined4 *)FUN_0012ca7c(param_1 + 7);
  *puVar1 = &UNK_008eb5cc;
  return puVar1 + -7;
}
