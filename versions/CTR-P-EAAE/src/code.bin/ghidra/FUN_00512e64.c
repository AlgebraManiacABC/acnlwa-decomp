/**
 * FUN_00512e64.c
 * Source line: 755776
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00512e64(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003d0cbc(auStack_10);
    uVar1 = FUN_005148a4(param_1,0x66,0,0,uVar1);
    FUN_003d0d6c(auStack_10);
  }
  return uVar1;
}
