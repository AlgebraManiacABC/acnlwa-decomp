/**
 * FUN_0063c498.c
 * Source line: 953436
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0063c498(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  Item_t aIStack_2c [2];
  
  iVar2 = FUN_00632acc();
  if (iVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_2 + 0xe);
  if (((bVar1 < 4) && (bVar1 == 1 || bVar1 == 2)) && (param_3 == 2 || param_3 == 3)) {
    Item_Set(aIStack_2c,(uint)*(ushort *)(param_2 + 0xc));
    FUN_002fe574(aIStack_2c,param_4);
  }
  FUN_002fb94c();
  return;
}
