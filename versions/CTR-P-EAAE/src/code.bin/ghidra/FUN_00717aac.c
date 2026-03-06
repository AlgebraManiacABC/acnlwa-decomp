/**
 * FUN_00717aac.c
 * Source line: 1071252
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00717aac(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 8) {
    iVar1 = (int)*(char *)(param_1 + param_2 + 0x34);
    if ((-1 < iVar1) && (iVar1 < 4)) {
      return 1;
    }
    if ((3 < iVar1) && (-1 < iVar1 + -4)) {
      return 2;
    }
  }
  return 0;
}
