/**
 * FUN_0012c0e8.c
 * Source line: 132928
 * Body lines: 12
 */
#include "../../../include/types.h"

FUN_0012c0e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = param_5 == 0;
  if (bVar3) {
    param_5 = *(int *)(param_1 + 0x228);
  }
  if ((!bVar3 || param_5 != 0) && (iVar1 = FUN_001330fc(param_1 + 0xc), iVar1 != 0)) {
    uVar2 = FUN_00130f0c(param_1 + 0xc,param_2,param_5,param_3,param_4);
    return uVar2;
  }
  return 0;
}
