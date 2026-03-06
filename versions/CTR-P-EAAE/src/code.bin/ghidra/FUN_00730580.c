/**
 * FUN_00730580.c
 * Source line: 1087115
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined1 FUN_00730580(int param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < 0xd)) {
    return *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0x10);
  }
  return 0;
}
