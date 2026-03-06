/**
 * FUN_0037de88.c
 * Source line: 486834
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0037de88(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fbf5c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar1 = FUN_003d0d6c(param_1 + 3);
  *(undefined **)(iVar1 + -0xc) = &UNK_008fc18c;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}
