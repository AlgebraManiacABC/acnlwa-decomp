/**
 * FUN_002bb090.c
 * Source line: 356756
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_002bb090(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_006ac35c();
  if ((iVar1 != 0) && ((char)param_1[0x13b] == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,param_1 + 0x51);
    uVar3 = FUN_00317cc8(param_1 + 0x59,0);
    iVar4 = FUN_004f11c0(param_1 + 0x135,uVar3,uVar2,uVar2,0,1,1);
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x13b) = 1;
  }
  return iVar1;
}
