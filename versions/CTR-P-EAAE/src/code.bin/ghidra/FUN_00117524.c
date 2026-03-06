/**
 * FUN_00117524.c
 * Source line: 116261
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00117524(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0075ace8(param_2);
  if (iVar1 == 0) {
    thunk_FUN_005e1974(param_2,"SYS_Player");
    iVar1 = FUN_002fb378();
    if (5 < (*(int *)(iVar1 + 4) >> 0x18) - 5U) {
      FUN_0031708c(param_2,&DAT_0011756c);
      return;
    }
    FUN_0031708c(param_2,&DAT_00117568);
  }
  return;
}
