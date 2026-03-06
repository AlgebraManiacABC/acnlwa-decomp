/**
 * FUN_0028133c.c
 * Source line: 327611
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0028133c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_00578158();
  if (*(char *)(param_1 + 0x2597) == '\0') {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x660) + 0x224);
    bVar1 = *pbVar2;
    *pbVar2 = bVar1 & 0xfb;
    *(byte *)(*(int *)(param_1 + 0x660) + 0x224) = bVar1 & 0xf9;
  }
  return;
}
