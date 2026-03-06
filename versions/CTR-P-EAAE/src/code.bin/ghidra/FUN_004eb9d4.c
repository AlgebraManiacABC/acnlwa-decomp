/**
 * FUN_004eb9d4.c
 * Source line: 733175
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_004eb9d4(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x2c) == '\0';
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x30) = param_2;
  }
  return bVar1;
}
