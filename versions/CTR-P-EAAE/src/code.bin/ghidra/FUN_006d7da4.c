/**
 * FUN_006d7da4.c
 * Source line: 1035257
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006d7da4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d6830();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x568) & 0xfffffff7;
    FUN_0081bb74(param_1 + 0x14,FUN_006d5430,0);
  }
  return;
}
