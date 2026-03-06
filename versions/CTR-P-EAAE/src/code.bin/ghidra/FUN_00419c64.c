/**
 * FUN_00419c64.c
 * Source line: 583888
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00419c64(int param_1)

{
  char *pcVar1;
  
  FUN_00426348(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != NULL) {
    if (*pcVar1 == '\x01') {
      FUN_00426224(pcVar1,0xd0a14867);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}
