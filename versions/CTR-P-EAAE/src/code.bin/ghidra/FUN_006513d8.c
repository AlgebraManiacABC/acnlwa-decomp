/**
 * FUN_006513d8.c
 * Source line: 962346
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006513d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  
  *(undefined4 *)(param_3 + 0x950) = param_1;
  *(undefined4 *)(param_3 + 0x954) = param_2;
  bVar2 = *(byte *)(param_3 + 0x17a);
  *(byte *)(param_3 + 0x17a) = bVar2 | 4;
  bVar1 = *(float *)(param_3 + 0x950) == *(float *)(param_3 + 0x40);
  if (bVar1) {
    *(byte *)(param_3 + 0x17a) = bVar2 & 0xfb;
  }
  return bVar1;
}
