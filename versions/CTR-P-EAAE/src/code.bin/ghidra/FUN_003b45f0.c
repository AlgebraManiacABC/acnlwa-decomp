/**
 * FUN_003b45f0.c
 * Source line: 524530
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003b45f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = NULL;
  if (*(char *)(param_1 + 0x26) != '\0') {
    puVar2 = param_1 + 0x27;
  }
  *param_1 = &UNK_008fd7c0;
  iVar1 = FUN_00370900(param_1 + 0x27,puVar2);
  FUN_00386d6c(iVar1 + -0x9c);
  FUN_00354ba0();
  return;
}
