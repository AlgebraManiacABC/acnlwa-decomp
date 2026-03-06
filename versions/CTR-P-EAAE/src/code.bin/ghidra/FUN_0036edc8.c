/**
 * FUN_0036edc8.c
 * Source line: 476282
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0036edc8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fb948;
  if ((*(char *)((int)param_1 + 0xd) != '\0') && (iVar1 = FUN_0036cfb4(), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  iVar1 = FUN_00370900(param_1 + 4);
  FUN_0036d104(iVar1 + -0x10);
  FUN_00354ba0();
  return;
}
