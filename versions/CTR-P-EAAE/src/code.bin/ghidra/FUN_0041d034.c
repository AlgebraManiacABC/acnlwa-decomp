/**
 * FUN_0041d034.c
 * Source line: 585627
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0041d034(int param_1)

{
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      FUN_00426348();
    }
    *(undefined **)(param_1 + 0x24) = &UNK_0041cfe4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalConnectNetworkJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  FUN_00426270(*(int *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}
