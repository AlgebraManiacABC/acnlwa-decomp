/**
 * FUN_003327e8.c
 * Source line: 434933
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_003327e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  Item_t aIStack_1c [2];
  
  piVar1 = (int *)(param_1 + 0xc80);
  bVar2 = *(uint *)(param_1 + 0xc80) < 5;
  if (bVar2) {
    Item_Set(aIStack_1c,0x225a);
    FUN_005cc2f4(param_1 + *(int *)(param_1 + 0xc80) * 0x280,"Mail_SP_Exhibition",3,param_2,
                 aIStack_1c,9,&UNK_003327e4);
    FUN_00768138(param_1 + *piVar1 * 0x280,param_3,0);
    *piVar1 = *piVar1 + 1;
  }
  return bVar2;
}
