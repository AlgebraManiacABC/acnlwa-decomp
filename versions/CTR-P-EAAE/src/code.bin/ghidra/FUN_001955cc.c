/**
 * FUN_001955cc.c
 * Source line: 206866
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001955cc(int param_1)

{
  if (*(char *)(param_1 + 0x2c12) != '\0') {
    FUN_004b6dc8(*(undefined4 *)(param_1 + 0x2bcc),*(undefined4 *)(param_1 + 0x1d30));
    *(undefined1 *)(param_1 + 0x2c12) = 0;
  }
  FUN_00817480(param_1 + 0x1ce4,FUN_0023ef70,0);
  FUN_002f6998(param_1 + 0x3c38,0xffffffff,0);
  *(undefined1 *)(param_1 + 0x1cdd) = 1;
  *(undefined1 *)(param_1 + 0x6b66) = 1;
  return;
}
