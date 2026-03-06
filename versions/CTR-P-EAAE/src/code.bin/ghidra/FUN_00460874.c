/**
 * FUN_00460874.c
 * Source line: 628199
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_00460874(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xd) == -1)) && (param_2 < 2)) {
    uVar1 = FUN_00460e4c();
    iVar2 = FUN_00460ecc(uVar1,1,param_2);
    if (iVar2 != 0) {
      *(char *)(param_1 + 0xd) = (char)param_2;
    }
    return iVar2 != 0;
  }
  return false;
}
