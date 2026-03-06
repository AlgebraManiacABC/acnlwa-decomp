/**
 * FUN_0044bcc0.c
 * Source line: 612709
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0044bcc0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (iVar1 = FUN_0073264c(), iVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x57) = 1;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (iVar1 = FUN_0073264c(), iVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 1;
  }
  return;
}
