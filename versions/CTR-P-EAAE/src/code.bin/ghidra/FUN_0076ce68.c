/**
 * FUN_0076ce68.c
 * Source line: 1130312
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076ce68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_10;
  
  uVar2 = 0;
  uStack_10 = param_4;
  do {
    FUN_006bbd54(&uStack_10,0x24,uVar2);
    iVar1 = FUN_0076d668(param_1,&uStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 += 1;
  } while (uVar2 < 0x48);
  return 1;
}
