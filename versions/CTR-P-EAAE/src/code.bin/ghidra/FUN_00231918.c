/**
 * FUN_00231918.c
 * Source line: 286217
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00231918(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x5c))(), iVar1 != 0)) {
    FUN_0068efa8();
  }
  if (((int)((uint)*(byte *)(param_1 + 0x225) << 0x1d) < 0) &&
     (-1 < (int)((uint)*(byte *)(param_1 + 0x225) << 0x1e))) {
    uVar2 = FUN_00584134();
    FUN_0058c514(uVar2,0x22);
    FUN_00813b30(param_1 + 0x224,9,1);
  }
  return;
}
