/**
 * FUN_0041fbc0.c
 * Source line: 586846
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0041fbc0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0073264c();
  uVar2 = 0xe0a14827;
  if (((iVar1 == 0) && (*(char *)((int)param_1 + 0x45) == '\0' || param_3 < 2)) &&
     (*(char *)((int)param_1 + 0x46) == '\0' || param_3 < 3)) {
    (**(code **)(*param_1 + 8))(param_1,0);
    param_1[0x10] = param_2;
    FUN_0042632c(param_2);
    FUN_004261dc(param_1[0x10]);
    uVar2 = 0;
    *(char *)(param_1 + 0x11) = (char)param_3;
  }
  return uVar2;
}
