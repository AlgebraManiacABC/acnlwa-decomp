/**
 * FUN_0013a6f8.c
 * Source line: 147247
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0013a6f8(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = FUN_0013a750(param_1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  } while ((param_2 < *(uint *)(iVar2 + 0x18)) || (*(uint *)(iVar2 + 0x1c) <= param_2));
  iVar1 = FUN_0013a6f8(iVar2 + 0xc,param_2);
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}
