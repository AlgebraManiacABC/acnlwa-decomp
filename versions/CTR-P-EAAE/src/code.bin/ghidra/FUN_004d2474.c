/**
 * FUN_004d2474.c
 * Source line: 715811
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_004d2474(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x10) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
