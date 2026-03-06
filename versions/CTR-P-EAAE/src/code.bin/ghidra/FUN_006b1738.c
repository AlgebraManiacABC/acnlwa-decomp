/**
 * FUN_006b1738.c
 * Source line: 1009953
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006b1738(int param_1)

{
  *(undefined **)(param_1 + 0x1c) = &UNK_00879d0c;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(char **)(param_1 + 4) = "RollText";
  *(undefined1 *)(param_1 + 8) = 0;
  (*(code *)&UNK_006b1998)();
  *(code **)(param_1 + 0xc) = FUN_006b17f8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
