/**
 * FUN_0031d8d4.c
 * Source line: 422315
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0031d8d4(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = '\x01';
  param_1 += (*(byte *)(param_1 + 0x24) & 1) * 0x94;
  if (*(int *)(param_1 + 0x3fc) != 0) {
    if (param_2 == 0) {
      cVar1 = *(char *)(param_1 + 0x40a);
    }
    if ((param_2 != 0 || cVar1 != '\0') && (FUN_004f0de0(), *(char *)(param_1 + 0x40a) != '\0')) {
      FUN_0031df9c(param_1 + 0x3e0,param_1 + 0x440,1);
      *(undefined1 *)(param_1 + 0x40a) = 0;
    }
  }
  return;
}
