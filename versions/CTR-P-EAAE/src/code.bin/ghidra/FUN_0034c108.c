/**
 * FUN_0034c108.c
 * Source line: 448644
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 * FUN_0034c108(undefined4 *param_1)

{
  *param_1 = &UNK_008b3518;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      software_interrupt(CloseHandle);
      param_1[1] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    software_interrupt(CloseHandle);
    param_1[1] = 0;
  }
  return param_1;
}
