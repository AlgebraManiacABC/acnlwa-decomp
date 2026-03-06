/**
 * FUN_00279a08.c
 * Source line: 323400
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00279a08(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (0x11 < param_2) {
    return;
  }
  if ((&UNK_0083de92)[param_2] != '\x01') {
    uVar1 = FUN_00766f04(DAT_0094d080);
    FUN_004bf06c(uVar1,0,param_3);
    return;
  }
  FUN_002bcd40(*(undefined4 *)(param_1 + param_2 * 4 + 0x3ec),param_1 + param_2 * 0x1c + 500,param_3
              );
  *(undefined1 *)(param_1 + param_2 + 0x434) = 0;
  return;
}
