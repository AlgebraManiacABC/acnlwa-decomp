/**
 * FUN_0056aedc.c
 * Source line: 812418
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0056aedc(short *param_1,short param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *param_1;
  sVar3 = __aeabi_idivmod((int)(short)(param_2 - sVar1),param_3);
  sVar2 = (short)param_4;
  if (sVar3 <= param_4) {
    if (-param_4 <= (int)sVar3) {
      *param_1 = sVar3 + sVar1;
      return;
    }
    sVar2 = -sVar2;
  }
  *param_1 = sVar1 + sVar2;
  return;
}
