/**
 * FUN_003580e4.c
 * Source line: 458717
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003580e4(undefined4 *param_1)

{
  *param_1 = &UNK_008fb214;
  if (*(char *)(param_1 + 0x47) != '\0') {
    if (param_1[0x46] != 0) {
      software_interrupt(CloseHandle);
      param_1[0x46] = 0;
    }
    *(undefined1 *)(param_1 + 0x47) = 0;
  }
  if (param_1[0x46] != 0) {
    software_interrupt(CloseHandle);
    param_1[0x46] = 0;
  }
  FUN_003d4b14(param_1);
  return;
}
