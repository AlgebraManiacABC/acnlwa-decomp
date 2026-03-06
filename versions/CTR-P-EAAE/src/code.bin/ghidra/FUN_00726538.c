/**
 * FUN_00726538.c
 * Source line: 1080201
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00726538(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00726804();
  uVar1 = FUN_00726594(param_1,uVar1,param_3);
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2 + 0x164) != '\0') {
      uVar1 = FUN_00726944(param_1 + uVar2 * 0x2c + 4,uVar1);
    }
    uVar2 += 1;
  } while (uVar2 < 8);
  return;
}
