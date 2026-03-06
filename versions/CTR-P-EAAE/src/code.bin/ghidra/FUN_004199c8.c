/**
 * FUN_004199c8.c
 * Source line: 583793
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_004199c8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00418658(*(undefined4 *)(iRam00974a58 + 0x14));
  if ((uint)uVar1 != 0) {
    return (uint)uVar1 & 0xff00 | 0x640004;
  }
  *(undefined **)(param_1 + 0x24) = &UNK_00419930;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalReceiveFromJob::ReceiveFrom";
  return (uint)((ulonglong)uVar1 >> 0x20) & 0xff00;
}
