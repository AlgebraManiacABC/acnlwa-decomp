/**
 * FUN_006ef61c.c
 * Source line: 1048328
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006ef61c(int param_1)

{
  byte bVar1;
  
  if ((param_1 != 0) &&
     (bVar1 = *(byte *)(param_1 + 0x84), *(byte *)(param_1 + 0x84) = bVar1 & 0xdb,
     (bVar1 & 0x10) == 0)) {
    *(int *)(param_1 + 0x88) = DAT_00957318;
    DAT_00957318 = param_1;
  }
  return;
}
