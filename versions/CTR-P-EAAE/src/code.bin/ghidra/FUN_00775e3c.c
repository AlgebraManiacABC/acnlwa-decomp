/**
 * FUN_00775e3c.c
 * Source line: 1134689
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 * FUN_00775e3c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 local_68 [96];
  
  uVar1 = FUN_00724400(param_1 + 0x1e98,*(undefined4 *)(param_1 + 0xa4));
  uVar1 = FUN_002fe7f4(local_68,uVar1,0);
  (**(code **)(*param_2 + 0x14))(param_2,uVar1);
  return local_68;
}
