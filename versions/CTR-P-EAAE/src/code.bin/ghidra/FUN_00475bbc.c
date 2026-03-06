/**
 * FUN_00475bbc.c
 * Source line: 645352
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00475bbc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x69d) == '\0') {
    uVar2 = 0x3f;
  }
  else {
    uVar2 = 0x45;
  }
  iVar1 = FUN_0047584c(param_1 + 0x724,param_1 + 0x6c4,&UNK_008b3195,6,0,uVar2);
  return iVar1 + 0x10;
}
