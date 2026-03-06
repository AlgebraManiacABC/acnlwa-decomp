/**
 * FUN_004581c8.c
 * Source line: 621949
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004581c8(int param_1)

{
  byte bVar1;
  uint unaff_r5;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x4c) + 0x14);
  if (bVar1 < 0xc) {
    FUN_00450ff4(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x28),bVar1,1);
    FUN_00450ff4(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x28),
                 *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x14),1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 6;
  *(undefined **)(param_1 + 0x24) = &UNK_00457f98;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "DisconnectStationJob::DisconnectionSucceeded";
  return unaff_r5 & 0xff00 | 5;
}
