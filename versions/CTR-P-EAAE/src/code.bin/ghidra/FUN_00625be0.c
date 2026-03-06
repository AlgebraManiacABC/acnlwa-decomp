/**
 * FUN_00625be0.c
 * Source line: 939498
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00625be0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0075dfe8(DAT_0095362c);
  if (iVar2 == 0) {
    uVar1 = param_3;
    if (param_3 < 5) {
      uVar1 = param_2;
    }
    if (uVar1 < 4) {
      *(char *)(param_1 + param_2 + 4) = (char)param_3;
    }
  }
  return;
}
