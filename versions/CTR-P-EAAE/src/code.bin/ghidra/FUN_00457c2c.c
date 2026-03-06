/**
 * FUN_00457c2c.c
 * Source line: 621817
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00457c2c(int param_1)

{
  if ((*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) &&
     (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000)) {
    FUN_0045b6a8(*(int *)(param_1 + 0xc));
    FUN_0045b6a8(*(undefined4 *)(param_1 + 0x10));
    return 0;
  }
  return 0xe0a14827;
}
