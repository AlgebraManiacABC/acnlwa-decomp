/**
 * FUN_006ef48c.c
 * Source line: 1048234
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006ef48c(void)

{
  int iVar1;
  
  iVar1 = DAT_00957318;
  if (DAT_00957318 != 0) {
    *(byte *)(DAT_00957318 + 0x84) = *(byte *)(DAT_00957318 + 0x84) & 0xdf | 5;
    DAT_00957318 = *(int *)(DAT_00957318 + 0x88);
    *(undefined2 *)(iVar1 + 0x82) = 0xffff;
    *(undefined4 *)(iVar1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x38) = 0x3f800000;
  }
  return;
}
