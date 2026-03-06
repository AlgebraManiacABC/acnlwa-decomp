/**
 * FUN_0041bb9c.c
 * Source line: 584790
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0041bb9c(int param_1)

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
  *(undefined1 *)(*(int *)(iRam00974a58 + 0x18) + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}
