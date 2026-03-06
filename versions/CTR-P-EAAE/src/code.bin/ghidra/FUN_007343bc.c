/**
 * FUN_007343bc.c
 * Source line: 1089918
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_007343bc(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if (*(byte *)(iVar1 + 0x10) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
