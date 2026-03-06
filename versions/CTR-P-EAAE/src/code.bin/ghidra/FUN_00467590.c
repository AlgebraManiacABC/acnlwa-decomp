/**
 * FUN_00467590.c
 * Source line: 633443
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00467590(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (cRam00974fa0 != '\0') {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0xc;
      if ((*(int *)(iVar1 + 0xae1054) == param_2 && *(int *)(iVar1 + 0xae1050) == param_1) &&
         (*(int *)(iVar1 + 0xae1058) != 7)) {
        return 1;
      }
      uVar2 += 1;
    } while (uVar2 < 1000);
  }
  return 0;
}
