/**
 * FUN_0072820c.c
 * Source line: 1081398
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0072820c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0034f004(param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar1 != -0x375ef410) {
      return iVar1;
    }
    FUN_0034cdcc(1,0);
    iVar2 += 1;
    uRam00974b9a = 1;
  } while (iVar2 < 3);
  uRam00974b9a = 1;
  return iVar1;
}
