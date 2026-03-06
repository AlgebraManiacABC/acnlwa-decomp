/**
 * FUN_0015501c.c
 * Source line: 168722
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0015501c(short *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  
  psVar1 = (short *)FUN_0016894c();
  if ((((*param_1 == *psVar1) && (param_1[1] == psVar1[1])) && (param_1[2] == psVar1[2])) &&
     (param_1[3] == psVar1[3])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
