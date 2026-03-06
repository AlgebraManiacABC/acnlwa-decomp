/**
 * FUN_00724578.c
 * Source line: 1079139
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_00724578(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 0x10) {
    uVar1 = *(undefined1 *)(param_1 + param_2 + 0x40);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
