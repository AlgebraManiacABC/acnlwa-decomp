/**
 * FUN_0034b850.c
 * Source line: 448215
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0034b850(undefined4 *param_1)

{
  *param_1 = &UNK_008faf30;
  FUN_0034b780(param_1);
  if (param_1[0x6f] != 0) {
    software_interrupt(CloseHandle);
    param_1[0x6f] = 0;
  }
  FUN_00135888();
  if (param_1[0x68] != 0) {
    software_interrupt(CloseHandle);
    param_1[0x68] = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
