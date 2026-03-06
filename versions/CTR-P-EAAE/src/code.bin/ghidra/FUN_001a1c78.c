/**
 * FUN_001a1c78.c
 * Source line: 210032
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001a1c78(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bb) == '\0') {
    if (*(char *)(param_1 + 0x134) == '\x1b' || *(char *)(param_1 + 0x134) == 'M') {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    uVar1 = FUN_006e225c();
    FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 200);
  }
  return;
}
