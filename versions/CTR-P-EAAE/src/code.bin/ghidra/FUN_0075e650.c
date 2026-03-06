/**
 * FUN_0075e650.c
 * Source line: 1118791
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0075e650(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x20) {
    iVar3 = 0;
    FUN_00135748();
    iVar1 = param_1 + param_2 * 4;
    iVar2 = *(int *)(iVar1 + 0x4024);
    if ((iVar2 != 0) && (iVar2 = FUN_0075e978(iVar2 + 4,param_1 + 0x38e0), -1 < iVar2)) {
      iVar3 = (int)*(char *)(*(int *)(iVar1 + 0x4024) + 0x88);
    }
    FUN_001357ec(param_1);
    return iVar3;
  }
  return 0;
}
