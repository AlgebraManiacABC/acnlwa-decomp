/**
 * FUN_004eea50.c
 * Source line: 736693
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004eea50(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xb4);
  FUN_004eead8(param_1 + 0x7c,param_1 + 0x58);
  FUN_004eea20(param_1 + 0x7c,param_1 + 0x68);
  *(undefined4 *)(*(int *)(param_1 + 0x88) + 0xe4) = *(undefined4 *)(param_1 + 0x78);
  return 1;
}
