/**
 * FUN_00625ba4.c
 * Source line: 939477
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00625ba4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 == 0) {
    bVar2 = 0xa4 < param_3;
    if (param_3 < 0xa6) {
      bVar2 = 3 < param_2;
    }
    if (!bVar2) {
      *(char *)(param_1 + param_2) = (char)param_3;
    }
  }
  return;
}
