/**
 * FUN_00425064.c
 * Source line: 589109
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00425064(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c348(*(undefined4 *)
                        (iRam00974a64 + (uint)*(byte *)(iRam00974a64 + 0xb5) * 4 + 0xb8));
  if (-1 < iVar1) {
    *(char **)(param_1 + 0x2c) = "LocalMatchUpdateApplicationDataJob::SignalProcess";
    *(undefined **)(param_1 + 0x24) = &UNK_004250e8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar1 = 0;
  }
  return iVar1;
}
