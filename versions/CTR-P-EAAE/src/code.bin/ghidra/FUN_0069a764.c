/**
 * FUN_0069a764.c
 * Source line: 1000605
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0069a764(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while (((((uint)(*(int *)(param_1 + 0xeb58) - *(int *)(param_1 + 0xeb54) >> 2) <= uVar1 ||
           (iVar2 = *(int *)(*(int *)(param_1 + 0xeb54) + uVar1 * 4), iVar2 == 0)) ||
          (*(ushort *)(iVar2 + 0xc) != param_3)) || (*(int *)(iVar2 + 0x1030) != param_2))) {
    uVar1 += 1;
    if (9 < uVar1) {
      return 0;
    }
  }
  return iVar2;
}
