/**
 * FUN_00195b8c.c
 * Source line: 207058
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00195b8c(int param_1)

{
  FUN_0027bfbc();
  if (*(char *)(param_1 + 0x1c01) == '\0') {
    FUN_002f7508(param_1 + 0x3c38,param_1 + 0xda4,0);
    FUN_002f6e14(param_1 + 0x3c38);
    *(undefined1 *)(param_1 + 0xe7d) = 1;
    *(undefined1 *)(param_1 + 0x6b66) = 0;
    *(undefined1 *)(param_1 + 0x6b6b) = *(undefined1 *)(param_1 + 0x1c03);
    FUN_008164d8(param_1 + 0x28,FUN_001950dc,0);
  }
  return;
}
