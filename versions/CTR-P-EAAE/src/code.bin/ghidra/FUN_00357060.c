/**
 * FUN_00357060.c
 * Source line: 458056
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00357060(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fb1c8;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_003d0db4(param_1 + 5,&UNK_0089ca24);
  FUN_003d0db4(param_1 + 7,&UNK_0089ca24);
  iVar1 = FUN_003d0d6c(param_1 + 7);
  iVar1 = FUN_003d0d6c(iVar1 + -8);
  FUN_00383420(iVar1 + -0x14);
  return;
}
