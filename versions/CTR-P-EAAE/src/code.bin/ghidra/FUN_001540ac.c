/**
 * FUN_001540ac.c
 * Source line: 168017
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001540ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0013d138();
  *(undefined1 *)(iVar1 + 0xc0) = 0;
  iVar1 = FUN_0013d138();
  if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
    iVar1 = FUN_0013d138();
    *(undefined4 *)(iVar1 + 200) = param_1;
    iVar1 = FUN_0013d138();
    *(undefined4 *)(iVar1 + 0xcc) = param_2;
  }
  return;
}
