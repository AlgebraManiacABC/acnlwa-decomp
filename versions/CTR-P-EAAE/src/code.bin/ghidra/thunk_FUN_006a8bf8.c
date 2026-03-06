/**
 * thunk_FUN_006a8bf8.c
 * Source line: 404189
 * Body lines: 6
 */
#include "../../../include/types.h"

void thunk_FUN_006a8bf8(undefined1 *param_1)

{
  *param_1 = 7;
  param_1[1] = 0;
  software_interrupt(0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 7;
  return;
}
