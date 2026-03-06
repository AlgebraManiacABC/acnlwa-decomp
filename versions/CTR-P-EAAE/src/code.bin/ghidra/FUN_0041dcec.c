/**
 * FUN_0041dcec.c
 * Source line: 585874
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0041dcec(int param_1)

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
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(*(int *)(iRam00974a58 + 0x18) + 0x10) = 0;
    *(undefined1 *)(*(int *)(iRam00974a58 + 0x18) + 0x34) = 0;
  }
  return;
}
