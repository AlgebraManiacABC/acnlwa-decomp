/**
 * FUN_0029e214.c
 * Source line: 342411
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0029e214(int *param_1)

{
  int iVar1;
  
  FUN_001af9b0();
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar1 != -1) {
    GET_DAT_0095bf74();
    return;
  }
  return;
}
