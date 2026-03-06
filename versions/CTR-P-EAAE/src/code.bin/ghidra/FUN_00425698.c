/**
 * FUN_00425698.c
 * Source line: 589299
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00425698(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x54);
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_00426224(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}
