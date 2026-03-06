/**
 * FUN_002aee88.c
 * Source line: 351027
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002aee88(int param_1)

{
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa1c4) = 0;
  FUN_0026eadc(param_1 + 0xf4);
  if (*(char *)(param_1 + 0x8525) != '\0') {
    FUN_0022c368(param_1 + 0x8024);
    return;
  }
  FUN_0022c368(param_1 + 0x7e44);
  return;
}
