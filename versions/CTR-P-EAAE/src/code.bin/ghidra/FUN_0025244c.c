/**
 * FUN_0025244c.c
 * Source line: 303433
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0025244c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_34 [2];
  int local_2c [2];
  
  iVar1 = FUN_00305f2c();
  if (iVar1 == 3) {
    local_2c[0] = 0x27;
    local_34[0] = 0;
    FUN_00616c68(local_34,local_2c,param_2);
    if (local_2c[0] == 0x27 || local_2c[0] == 0x28) {
      uVar2 = FUN_002fb94c();
      return uVar2;
    }
  }
  return 1;
}
