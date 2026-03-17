/**
 * FUN_0041fb7c.c
 * Source line: 586826
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0041fb7c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_00426224(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = 10;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}
