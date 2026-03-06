/**
 * FUN_0073c6ec.c
 * Source line: 1095766
 * Body lines: 14
 */
#include "../../../include/types.h"

float FUN_0073c6ec(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_2 == 1) {
    iVar1 = *(int *)(param_3 + 4);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x30) & 3) != 0)) {
      fVar2 = (float)*(ushort *)(*(int *)(iVar1 + 0x34) + 8);
    }
  }
  else if (((param_2 == 4 || param_2 == 8) && (iVar1 = *(int *)(param_3 + 0x14), iVar1 != 0)) &&
          ((*(uint *)(iVar1 + 0x30) & 3) != 0)) {
    fVar2 = (float)*(ushort *)(*(int *)(iVar1 + 0x34) + 8);
  }
  return fVar2;
}
