/**
 * FUN_0055c1b8.c
 * Source line: 802186
 * Body lines: 15
 */
#include "../../../include/types.h"

uint * FUN_0055c1b8(int *param_1,uint *param_2)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x60768) != 2) {
    *(int *)(*param_1 + 0x60768) = 2;
    *param_2 = *(byte *)((int)param_1 + 0x129d6) | 0x80000000;
    param_2[1] = 0x804f0290;
    param_2[2] = uRam00af51d8;
    param_2[3] = uRam00af51d4;
    param_2[4] = uRam00af51d0;
    param_2[5] = uRam00af51cc;
    __rt_memcpy_w(param_2 + 6,param_1 + 0xe228,param_1[0xe628]);
    iVar1 = (int)(param_2 + 6) + (param_1[0xe628] & 0xfffffffcU);
    __rt_memcpy_w(iVar1,param_1 + 0xe629,param_1[0xe6a9]);
    param_2 = (uint *)((param_1[0xe6a9] & 0xfffffffcU) + iVar1);
  }
  return param_2;
}
