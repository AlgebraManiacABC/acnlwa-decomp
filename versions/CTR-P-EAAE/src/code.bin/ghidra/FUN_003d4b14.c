/**
 * FUN_003d4b14.c
 * Source line: 546097
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003d4b14(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008febc0;
  if (piRam0096be20 != NULL) {
    (**(code **)(*piRam0096be20 + 4))();
  }
  piRam0096be20 = NULL;
  iVar1 = FUN_003d0d6c(param_1 + 0x44);
  if (*(int **)(iVar1 + -4) != NULL) {
    (**(code **)(**(int **)(iVar1 + -4) + 4))();
  }
  iVar1 = FUN_003944a8(iVar1 + -0xa8);
  FUN_0037d65c(iVar1 + -0x68);
  return;
}
