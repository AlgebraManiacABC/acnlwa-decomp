/**
 * FUN_002389f8.c
 * Source line: 289785
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_002389f8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  iVar1 = DAT_0095debc;
  if (param_2 != 0) {
    if (((10 < param_2) || (*(int *)(param_1 + 4) == 0)) ||
       (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar2 == 0 || DAT_0095debc == 0)) {
      return 0;
    }
    FUN_005fcfd8(auStack_20);
    FUN_0075be20(iVar1,(int)auStack_20,"STR_Fashion_Looks",param_2 - 1);
    FUN_005f12b4(iVar2,auStack_20);
  }
  return 1;
}
