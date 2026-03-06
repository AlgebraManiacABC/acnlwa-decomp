/**
 * FUN_007c9c24.c
 * Source line: 1173153
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_007c9c24(int *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  
  if ((param_2 < 2) && ((*(byte *)((int)param_1 + (param_2 >> 3) + 0x5c) >> (param_2 & 7) & 1) != 0)
     ) {
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_1 + param_2 * 4 + 0xf,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    pbVar2 = (byte *)((int)param_1 + (param_2 >> 3) + 0x5c);
    *pbVar2 = *pbVar2 & ~(byte)(1 << (param_2 & 7));
  }
  FUN_007e91bc(param_1 + param_2 * 4 + 0xf);
  return 1;
}
