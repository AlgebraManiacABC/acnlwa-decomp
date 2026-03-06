/**
 * FUN_00412cc8.c
 * Source line: 579244
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00412cc8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004120a8(*(undefined4 *)(param_1 + 0x24));
  iVar2 = -0x275eb73f;
  if ((((-1 < iVar1) && (iVar1 = FUN_00412060(*(undefined4 *)(param_1 + 0x24),param_2), -1 < iVar1))
      && (iVar2 = FUN_003e7994(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24)),
         -1 < iVar2)) &&
     (((iVar2 = FUN_003e7994(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x24)),
       -1 < iVar2 && (iVar2 = FUN_003e79ac(*(undefined4 *)(param_1 + 0x28)), -1 < iVar2)) &&
      (iVar2 = FUN_003e79ac(*(undefined4 *)(param_1 + 0x2c)), -1 < iVar2)))) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    return 0;
  }
  return iVar2;
}
