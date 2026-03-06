/**
 * FUN_0034b8b4.c
 * Source line: 448235
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0034b8b4(undefined4 *param_1)

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
  return param_1;
}
