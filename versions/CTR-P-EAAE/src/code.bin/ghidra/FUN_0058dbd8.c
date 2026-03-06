/**
 * FUN_0058dbd8.c
 * Source line: 838601
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0058dbd8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = switchD_00545c98::caseD_3(param_2,&DAT_0058dc14);
  *param_1 = uVar1;
  uVar1 = switchD_00545c98::caseD_3(param_2,&DAT_0058dc1c);
  param_1[1] = uVar1;
  uVar1 = FUN_004ed570(param_2);
  param_1[2] = uVar1;
  return;
}
