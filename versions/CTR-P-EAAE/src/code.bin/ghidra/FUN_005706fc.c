/**
 * FUN_005706fc.c
 * Source line: 816375
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005706fc(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x2d0) != 0) {
    FUN_007461b4(param_2 + 0x2c8);
    return;
  }
  if (*(int *)(param_2 + 0x584) == 0) {
    if (*(int *)(param_2 + 0x5a4) != 0) {
      FUN_007461b4(param_1,param_2 + 0x59c);
      return;
    }
    return;
  }
  FUN_007461b4(param_2 + 0x57c);
  return;
}
