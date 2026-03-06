/**
 * FUN_0075e0c0.c
 * Source line: 1118410
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0075e0c0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_1;
  if ((cVar1 == '\0' || cVar1 == '\a') || (cVar1 == '6' || cVar1 == '*')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
