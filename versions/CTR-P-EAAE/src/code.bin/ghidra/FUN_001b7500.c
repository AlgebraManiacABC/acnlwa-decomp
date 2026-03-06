/**
 * FUN_001b7500.c
 * Source line: 222437
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001b7500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00304c1c(0x8000);
  if ((iVar1 == 0) || (*(byte *)(param_1 + 0xe) < 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
