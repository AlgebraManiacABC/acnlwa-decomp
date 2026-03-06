/**
 * FUN_004d44b4.c
 * Source line: 717294
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_004d44b4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_0013e92c(*param_1,(param_2 + 0x1fU & 0xffffffe0) + 0x20,0x20);
  puVar2 = puVar1;
  if (puVar1 != NULL) {
    puVar2 = puVar1 + 8;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar2;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    FUN_0013e7d8(param_1[3] + 8,param_1[3] + 0xc,puVar1);
  }
  return puVar2;
}
