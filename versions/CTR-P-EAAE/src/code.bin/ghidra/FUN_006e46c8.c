/**
 * FUN_006e46c8.c
 * Source line: 1042178
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_006e46c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005bf758(0x9ab57c,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}
