/**
 * FUN_00423188.c
 * Source line: 588061
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00423188(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_00426224(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}
