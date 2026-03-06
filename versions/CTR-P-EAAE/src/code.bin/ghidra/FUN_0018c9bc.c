/**
 * FUN_0018c9bc.c
 * Source line: 202805
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0018c9bc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00751500();
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0x5ec) != '\x03') && (*(char *)(param_1 + 0x308) == '\0')) {
      FUN_00572a20(0x3f800000,param_1,0,1,0,0x1f);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x308) = 1;
    FUN_005707f0(0xc1200000,param_1,0x1f);
  }
  FUN_0018c434(param_1);
  *(undefined1 *)(param_1 + 0x308) = 0;
  return 1;
}
