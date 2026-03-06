/**
 * FUN_0030bb10.c
 * Source line: 409773
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0030bb10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00535a68();
  if (((iVar1 == 0) || (7 < *(byte *)(iVar1 + 0xd) >> 4)) || (*(byte *)(iVar1 + 0xd) >> 4 != 7)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
