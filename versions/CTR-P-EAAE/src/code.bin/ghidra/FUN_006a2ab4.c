/**
 * FUN_006a2ab4.c
 * Source line: 1002166
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006a2ab4(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0x15;
  *(undefined **)(param_1 + 0xac) = &UNK_00854790;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(char **)(param_1 + 0x94) = "BsSvDemo";
  *(undefined1 *)(param_1 + 0x98) = 0;
  (*(code *)&UNK_006a20b4)();
  *(code **)(param_1 + 0x9c) = FUN_006a1f48;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return 2;
}
