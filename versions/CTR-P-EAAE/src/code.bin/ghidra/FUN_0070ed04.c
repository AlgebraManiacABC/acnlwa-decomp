/**
 * FUN_0070ed04.c
 * Source line: 1066151
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0070ed04(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x5b) {
    uVar1 = *(undefined4 *)(&UNK_0083b4c8 + param_2 * 0x1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
