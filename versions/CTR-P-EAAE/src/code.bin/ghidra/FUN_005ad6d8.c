/**
 * FUN_005ad6d8.c
 * Source line: 859267
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_005ad6d8(int param_1,int param_2,undefined4 param_3,ushort *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005ae51c();
  FUN_001017e4(param_1 + iVar1 * 2,&UNK_008b3710);
  if (param_5 == 0) {
    puVar3 = (undefined4 *)0x981680;
  }
  else {
    puVar3 = (undefined4 *)0x981688;
  }
  iVar1 += 1;
  iVar2 = FUN_00100f68(param_1 + iVar1 * 2,param_2 - iVar1,&UNK_008b3700,*param_4 + 100,*puVar3);
  return iVar2 + iVar1;
}
