/**
 * FUN_004d8a9c.c
 * Source line: 720299
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004d8a9c(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3b) == '\0') {
    return;
  }
  iVar1 = 0;
  do {
    FUN_007a86d4(iVar1);
    iVar1 += 1;
  } while (iVar1 < 4);
  FUN_00141b18(1,param_1 + 1);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  FUN_007ace48();
  FUN_007a83dc(*param_1);
  return;
}
