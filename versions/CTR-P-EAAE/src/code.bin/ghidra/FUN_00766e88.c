/**
 * FUN_00766e88.c
 * Source line: 1124924
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00766e88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0xc5c) != '\0') {
    iVar1 = FUN_0071d314(uRam0094cd20,2);
    if ((iVar1 == 0) || (iVar1 = FUN_0071d314(uRam0094cd20,3), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
