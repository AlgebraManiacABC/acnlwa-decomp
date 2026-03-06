/**
 * FUN_007702a4.c
 * Source line: 1133139
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_007702a4(byte *param_1)

{
  int iVar1;
  ItemID *pIVar2;
  byte *pbVar3;
  
  if (*param_1 == 0x9b) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    pIVar2 = FUN_005359fc((uint)*param_1);
    pbVar3 = param_1 + pIVar2[1] * 4 + 4;
    while ((param_1 = param_1 + 4, param_1 < pbVar3 && (*(int *)param_1 != -1))) {
      iVar1 += 1;
    }
  }
  return iVar1;
}
