/**
 * FUN_0046baec.c
 * Source line: 637414
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0046baec(int param_1)

{
  if ((*(char *)(param_1 + 4) == '\n') && (param_1 != -0x1c)) {
    *(undefined1 *)(param_1 + 0x1a6) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    __rt_memclr((undefined4 *)(param_1 + 0x32),0x40);
    __rt_memclr((undefined4 *)(param_1 + 0x72),300);
    FUN_007795ac(param_1 + 0x19e);
    return 0;
  }
  return 0xc960f84d;
}
