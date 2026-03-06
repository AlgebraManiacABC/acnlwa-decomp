/**
 * FUN_0045eb0c.c
 * Source line: 626691
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0045eb0c(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[0x15];
  *param_1 = &UNK_00900f7c;
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_004261f4(pcVar1);
    }
    if (param_1[0x15] != 0) {
      FUN_0053814c(param_1[0x15]);
    }
    param_1[0x15] = 0;
  }
  FUN_00426fb0(param_1);
  FUN_004260c4();
  return;
}
