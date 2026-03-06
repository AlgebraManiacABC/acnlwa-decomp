/**
 * FUN_0024246c.c
 * Source line: 295318
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0024246c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_50 [16];
  undefined1 local_40;
  undefined1 auStack_38 [24];
  undefined1 local_20 [12];
  
  FUN_00314a1c(auStack_38,_DAT_00ab7df4);
  FUN_00314a9c(auStack_50,_DAT_00ab7df4);
  iVar1 = FUN_00314b04(auStack_50,auStack_38);
  while (iVar1 != 0) {
    FUN_00527c34(local_20,local_40,1,param_1);
    FUN_00314b58(auStack_50);
    iVar1 = FUN_00314b04(auStack_50,auStack_38);
  }
  GET_DAT_0095bf74();
  return;
}
