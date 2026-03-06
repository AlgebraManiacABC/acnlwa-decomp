/**
 * FUN_0056a58c.c
 * Source line: 811879
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_0056a58c(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00135740(0xae563c);
    iVar1 = FUN_00542358(_DAT_009752e0,param_1,param_2,0,0);
    bVar2 = iVar1 != 0;
    *(int *)(param_1 + 0x30) = iVar1;
    FUN_00137e84(0xae563c);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
