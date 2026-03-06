/**
 * FUN_001060ec.c
 * Source line: 107599
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001060ec(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  Item_t aIStack_14 [2];
  
  *(ushort *)(param_2 + *param_3 * 2) =
       *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  *(int *)(param_2 + 0x280) = *(int *)(param_2 + 0x280) + -1;
  iVar1 = FUN_002fe7cc(1);
  if (iVar1 != 0) {
    Item_Set(aIStack_14,0x2118);
    FUN_002ff800(aIStack_14);
    FUN_002fc994(iVar1,aIStack_14,param_3[2],param_3[3],0);
    NOP_002f777c();
  }
  return;
}
