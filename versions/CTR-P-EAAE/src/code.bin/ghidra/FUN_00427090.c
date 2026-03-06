/**
 * FUN_00427090.c
 * Source line: 590948
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00427090(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x908) != '\0') {
    if (*(char *)(param_1 + 0x908) == '\x01') {
      *(undefined1 *)(param_1 + 0x909) = param_2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x909) = param_2;
  *(undefined1 *)(param_1 + 0x908) = 1;
  return;
}
