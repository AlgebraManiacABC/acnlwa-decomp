/**
 * FUN_0033057c.c
 * Source line: 433755
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0033057c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0095deac + 0x18);
  FUN_005ffd94(uVar1,param_1 + 0x7c,*(undefined4 *)(DAT_0095deac + 0x14));
  *(undefined1 *)(param_1 + 0x138) = 1;
  FUN_006001f0(uVar1,param_2,0);
  return 1;
}
