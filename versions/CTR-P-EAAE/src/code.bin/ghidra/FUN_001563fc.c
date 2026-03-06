/**
 * FUN_001563fc.c
 * Source line: 169564
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001563fc(undefined *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0013d138();
  if (param_1 == NULL) {
    param_1 = &UNK_00180ee0;
  }
  *(undefined **)(iVar1 + 0xdc) = param_1;
  return;
}
