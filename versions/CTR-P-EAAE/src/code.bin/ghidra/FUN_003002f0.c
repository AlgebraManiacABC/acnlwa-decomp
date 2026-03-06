/**
 * FUN_003002f0.c
 * Source line: 398165
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003002f0(short *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = '\0';
  if (*param_1 != 0) {
    cVar1 = (char)param_1[1];
  }
  if ((*param_1 != 0 && cVar1 != '\0') && (*(char *)((int)param_1 + 3) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
