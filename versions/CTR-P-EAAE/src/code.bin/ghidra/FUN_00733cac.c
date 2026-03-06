/**
 * FUN_00733cac.c
 * Source line: 1089577
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00733cac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xc4);
  if ((*(char *)(param_1 + 0x71) == '\x04') && (uVar1 = 0, *(int *)(param_1 + 100) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + (uint)(*(byte *)(param_1 + 0xb5) == 0) * 4 + 0xc4);
  }
  return uVar1;
}
