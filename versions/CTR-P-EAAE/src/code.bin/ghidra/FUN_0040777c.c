/**
 * FUN_0040777c.c
 * Source line: 574187
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0040777c(int param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_003fb128();
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  *(undefined1 *)(param_1 + 0x125) = 0;
  return;
}
