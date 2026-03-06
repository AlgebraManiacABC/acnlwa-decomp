/**
 * FUN_004f74b0.c
 * Source line: 742022
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004f74b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521d3c(0x8000);
  if (((iVar1 != 0) && (*(char *)(*(int *)(param_1 + 0x30) + 0x188) != '\0')) &&
     (iVar1 = FUN_004dad20(*(int *)(param_1 + 0x30),param_1 + 0x1c), iVar1 != 0)) {
    if (0 < *(int *)(param_1 + 0x5c)) {
      FUN_0058d3b4(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0));
      return;
    }
  }
  return;
}
