/**
 * FUN_0044c1b8.c
 * Source line: 612983
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0044c1b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8);
  if (*(char *)(param_1 + 0x71) == '\x04') {
    uVar1 = *(undefined4 *)(param_1 + (uint)(*(byte *)(param_1 + 0xb5) == 0) * 4 + 0xb8);
  }
  return uVar1;
}
