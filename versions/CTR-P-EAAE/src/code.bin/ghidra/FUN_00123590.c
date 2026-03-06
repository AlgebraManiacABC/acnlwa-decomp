/**
 * FUN_00123590.c
 * Source line: 125458
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00123590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  int *local_c;
  
  FUN_001289ac(auStack_18,0,param_2);
  iVar1 = FUN_00128a30(&local_c,auStack_18);
  if (-1 < iVar1) {
    iVar2 = FUN_00135384(param_1,local_c,0);
    iVar1 = 0;
    if (iVar2 < 0) {
      (**(code **)(*local_c + 0x30))();
      iVar1 = iVar2;
    }
  }
  return iVar1;
}
