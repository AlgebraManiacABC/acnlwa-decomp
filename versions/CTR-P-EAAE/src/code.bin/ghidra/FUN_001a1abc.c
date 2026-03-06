/**
 * FUN_001a1abc.c
 * Source line: 209920
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001a1abc(int param_1,undefined4 param_2,int param_3)

{
  FUN_001a2c48();
  if (param_3 != -1) {
    *(char *)(param_1 + 0x135) = (char)param_3;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x10e) = *(undefined2 *)(param_1 + 0x1e);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}
