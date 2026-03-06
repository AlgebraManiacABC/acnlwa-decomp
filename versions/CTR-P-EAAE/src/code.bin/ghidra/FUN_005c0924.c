/**
 * FUN_005c0924.c
 * Source line: 870087
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005c0924(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(param_1,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == 'D')) {
    uVar2 = 1;
  }
  return uVar2;
}
