/**
 * FUN_001154b4.c
 * Source line: 115072
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001154b4(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_002fe6b8(param_3[2],param_3[3],DAT_00952b9d);
  if (iVar1 == 0) {
    *(ushort *)(param_2 + *param_3 * 2) =
         *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  }
  return;
}
