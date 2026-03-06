/**
 * FUN_0046fb14.c
 * Source line: 640939
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0046fb14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[1] == '\0') {
    iVar1 = 0;
  }
  else {
    iVar2 = *param_1;
    iVar1 = FUN_00479718(iVar2,0,0,param_2,param_3,0,0,0,param_4,1,param_1 + 2);
    if ((iVar1 != 0) && (FUN_00473eb8(iVar2), *(char *)(iVar2 + 0x44) != '\0')) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
