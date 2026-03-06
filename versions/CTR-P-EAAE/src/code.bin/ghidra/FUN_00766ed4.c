/**
 * FUN_00766ed4.c
 * Source line: 1124945
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00766ed4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fb378();
  if ((*(char *)(iVar1 + 7) < '\a') || (iVar1 = FUN_002fb378(), '\x12' < *(char *)(iVar1 + 7))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
