/**
 * FUN_001babbc.c
 * Source line: 224475
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001babbc(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  astruct aStack_20;
  
  if (param_1 == NULL) {
    return;
  }
  astruct_Init(&aStack_20);
  iVar1 = FUN_0056a4a4(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_005bf790(&aStack_20,param_2,_DAT_00952cac,0x20), iVar1 != 0)) {
    uVar2 = __rt_memcpy(param_1,(uint *)aStack_20.data,0x38);
    FUN_0013864c(&aStack_20,(int)((ulonglong)uVar2 >> 0x20));
  }
  FUN_0013bb80(&aStack_20);
  return;
}
