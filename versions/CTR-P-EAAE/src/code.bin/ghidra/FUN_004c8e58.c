/**
 * FUN_004c8e58.c
 * Source line: 708541
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_004c8e58(undefined4 *param_1)

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
  return iVar1 + -0xc;
}
