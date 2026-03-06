/**
 * FUN_0074b7b4.c
 * Source line: 1105209
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0074b7b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074a1bc();
  if ((iVar1 == 0) || (*(char *)(param_1 + 9) != '\x02')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
