/**
 * FUN_00411310.c
 * Source line: 578393
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00411310(int param_1,int param_2,uint param_3)

{
  if ((param_2 - 0x100000U < 0x3ff00000) && (param_3 < 0x181)) {
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(iRam00974a64 + (uint)*(byte *)(iRam00974a64 + 0xb5) * 4 + 0xb8);
    nnnstdMemCpy(param_1 + 0xe8,param_2,param_3);
    *(uint *)(param_1 + 0x60) = (0x80 - *(int *)(param_1 + 100)) + param_3;
    *(undefined4 *)(param_1 + 0x24) = 0x4113dc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexMatchUpdateApplicationDataJob::UpdateApplicationBuffer";
    return 0;
  }
  return 0xe0e14826;
}
