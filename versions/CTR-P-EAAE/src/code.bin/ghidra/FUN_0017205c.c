/**
 * FUN_0017205c.c
 * Source line: 188160
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0017205c(int param_1)

{
  if (*(char *)(param_1 + 0x11) != '\0') {
    if ((*(uint *)(param_1 + 0x138) & 0xfffffffe) != 0) {
      if ((*(uint *)(param_1 + 0x138) & 1) != 0) {
        FUN_00134250();
      }
      FUN_0012ede8(*(uint *)(param_1 + 0x138) & 0xfffffffe);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}
