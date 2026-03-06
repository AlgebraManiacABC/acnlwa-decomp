/**
 * FUN_003d39ec.c
 * Source line: 545227
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003d39ec(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_2;
  param_1[2] = 0x7f;
  if (cVar1 == '\0') {
    uVar2 = 0x80010001;
  }
  else {
    uVar2 = 0x10001;
  }
  param_1[1] = &UNK_0089a66c;
  *param_1 = uVar2;
  return;
}
