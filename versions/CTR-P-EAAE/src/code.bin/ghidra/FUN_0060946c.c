/**
 * FUN_0060946c.c
 * Source line: 922566
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0060946c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x124);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      FUN_0081c0a0();
      return;
    }
    *(code **)(param_1 + 0xc) = FUN_00608f8c;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
