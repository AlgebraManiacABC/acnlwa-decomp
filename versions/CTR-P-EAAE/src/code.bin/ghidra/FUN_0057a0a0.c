/**
 * FUN_0057a0a0.c
 * Source line: 822942
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0057a0a0(int param_1,int param_2)

{
  *(short *)(param_1 + 4) = (short)param_2;
  if (param_2 == 0xe) {
    *(undefined2 *)(param_1 + 0x14) = uRam00984628;
    *(undefined4 *)(param_1 + 0x18) = uRam0098462c;
    *(undefined2 *)(param_1 + 0x1c) = uRam00984630;
    *(undefined1 *)(param_1 + 0x1e) = uRam00984632;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}
