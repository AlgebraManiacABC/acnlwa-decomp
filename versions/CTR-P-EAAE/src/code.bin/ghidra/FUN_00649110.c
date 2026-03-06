/**
 * FUN_00649110.c
 * Source line: 958542
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00649110(undefined4 param_1)

{
  int iVar1;
  
  FUN_0064c130();
  iVar1 = FUN_00632acc(param_1);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xbb) = *(byte *)(iVar1 + 0xbb) | 4;
  }
  return;
}
