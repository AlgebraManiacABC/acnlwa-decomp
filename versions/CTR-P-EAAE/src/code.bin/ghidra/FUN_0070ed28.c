/**
 * FUN_0070ed28.c
 * Source line: 1066167
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0070ed28(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x5b) {
    uVar1 = *(undefined4 *)(&UNK_0083b4cc + param_2 * 0x1c);
  }
  else {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}
