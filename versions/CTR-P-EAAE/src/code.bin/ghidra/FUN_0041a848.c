/**
 * FUN_0041a848.c
 * Source line: 584319
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0041a848(int param_1)

{
  char *pcVar1;
  
  FUN_00426348(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_00426224(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}
