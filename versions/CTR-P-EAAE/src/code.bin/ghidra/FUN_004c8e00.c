/**
 * FUN_004c8e00.c
 * Source line: 708522
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004c8e00(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00902214;
  param_1[3] = &PTR_PTR_00902234;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  iVar1 = FUN_004c866c(param_1 + 3);
  FUN_002ffb64(iVar1 + -0xc);
  return;
}
