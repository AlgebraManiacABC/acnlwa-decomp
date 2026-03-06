/**
 * FUN_003352f0.c
 * Source line: 435920
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_003352f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xeb) == '\0') {
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_0056a9bc(param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0xeb) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}
