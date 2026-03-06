/**
 * FUN_005dd230.c
 * Source line: 888535
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005dd230(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &UNK_00908cf0;
  param_1[1] = param_2;
  param_1[2] = 0;
  iVar1 = FUN_00810f00(param_1 + 3);
  iVar1 = FUN_00810f00(iVar1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return;
}
