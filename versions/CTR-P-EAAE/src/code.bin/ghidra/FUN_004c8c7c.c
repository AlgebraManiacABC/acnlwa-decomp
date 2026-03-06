/**
 * FUN_004c8c7c.c
 * Source line: 708468
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004c8c7c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_004c7b64(*param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[1] != '\0';
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}
