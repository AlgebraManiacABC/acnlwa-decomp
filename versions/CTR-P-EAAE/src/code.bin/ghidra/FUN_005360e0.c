/**
 * FUN_005360e0.c
 * Source line: 777642
 * Body lines: 15
 */
#include "../../../include/types.h"

char * FUN_005360e0(byte *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (uint)*param_1;
  if (uVar1 < 0xaa) {
    if (param_2 == 0) {
      pcVar2 = *(char **)(&UNK_0087819c + uVar1 * 0xc);
    }
    else {
      pcVar2 = *(char **)(&UNK_00878198 + uVar1 * 0xc);
    }
  }
  else {
    pcVar2 = "fg_apple_out";
  }
  return pcVar2;
}
