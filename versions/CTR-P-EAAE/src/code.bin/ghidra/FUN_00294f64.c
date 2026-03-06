/**
 * FUN_00294f64.c
 * Source line: 337077
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00294f64(int param_1)

{
  if (*(char *)(param_1 + 0xf6) == '\0') {
    FUN_00568630(*(undefined4 *)(param_1 + 0x30),param_1 + 0x5c,*(undefined4 *)(param_1 + 0xb0),0);
    FUN_005697e0(0,param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0xf6) = 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x122) = 1;
  return;
}
