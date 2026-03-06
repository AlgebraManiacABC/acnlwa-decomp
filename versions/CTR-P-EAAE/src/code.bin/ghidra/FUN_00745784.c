/**
 * FUN_00745784.c
 * Source line: 1101728
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_00745784(byte *param_1)

{
  undefined1 uVar1;
  
  if (*param_1 < 5) {
    uVar1 = *(undefined1 *)((&DAT_009529fc)[*param_1] + 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
