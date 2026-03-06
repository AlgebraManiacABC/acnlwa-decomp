/**
 * FUN_0045eb74.c
 * Source line: 626714
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0045eb74(undefined4 *param_1)

{
  *param_1 = &UNK_00900f7c;
  if ((char *)param_1[0x15] != NULL) {
    if (*(char *)param_1[0x15] == '\x01') {
      FUN_004261f4();
    }
    if (param_1[0x15] != 0) {
      FUN_0053814c(param_1[0x15]);
    }
    param_1[0x15] = 0;
  }
  FUN_00426fb0(param_1);
  return;
}
