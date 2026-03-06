/**
 * FUN_00581050.c
 * Source line: 826797
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00581050(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005814d0();
  if (iVar1 != 0) {
    iVar1 = FUN_002fd108(0x4000,param_2,0x80);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      FUN_006138a4();
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      return 1;
    }
  }
  FUN_005817f0(param_1);
  return 0;
}
