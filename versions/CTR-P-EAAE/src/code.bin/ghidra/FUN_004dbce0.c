/**
 * FUN_004dbce0.c
 * Source line: 722393
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004dbce0(char *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_002fe450((int)*param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfff1ffff | (param_2 & 7) << 0x11;
  }
  return;
}
