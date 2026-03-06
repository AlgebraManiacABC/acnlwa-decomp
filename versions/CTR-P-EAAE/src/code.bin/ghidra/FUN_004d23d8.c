/**
 * FUN_004d23d8.c
 * Source line: 715788
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004d23d8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      FUN_004cc098(iVar1,param_3);
    }
    iVar2 += 1;
    param_2 >>= 1;
  } while (iVar2 < 0x10);
  return;
}
