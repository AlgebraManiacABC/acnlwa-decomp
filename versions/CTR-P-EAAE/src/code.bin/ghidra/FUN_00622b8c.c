/**
 * FUN_00622b8c.c
 * Source line: 936540
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00622b8c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x42a8) == '\0') {
    FUN_002fb918();
    iVar1 = FUN_001df2f8();
    if ((iVar1 != 0) && (FUN_002be568(iVar1,param_2), *(char *)(param_1 + 0x42aa) != '\0')) {
      FUN_006221e4(param_1);
      *(undefined1 *)(param_1 + 0x42a8) = 3;
    }
  }
  return;
}
